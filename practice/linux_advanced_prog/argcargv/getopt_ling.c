#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

/* program name */
const char *program_name;

/* out information about program usage to the STREAM
 * flow (stdout or stderr in common) and end of program
 * work with exit code EXIT_XODE.
 * no return to the main() func.
 */

void print_usage(FILE *stream, int exit_code)
{
    fprintf(stream, "usage: %s options [ inputfile... ]\n", program_name);
    fprintf(stream,
        " -h --help     display this usage info\n"
        " -o --output   filename write output to file.\n"
        " -v --verbose  print verbose message.\n");
    exit(exit_code);
}

/* enter point into the main program, param ARGC contain size
 * of the args list; param ARGV -- this is pointer to pointers array */

int main(int argc, char *argv[])
{
    int next_option;

    /* string with short option description. */
    const char *const short_options = "ho:v";

    /* array with long option description */
    const struct option long_options[] = {
        { "help",    0, NULL, 'h' },
        { "output",  1, NULL, 'o' },
        { "verbose", 0, NULL, 'v' },
        { NULL,      0, NULL, 0 } /* this need in the end of array */
    };

    /* filename in which results will be written, or NULL, if output
     * redirects in the stdout
     */
    const char *output_filename = NULL;

    /* whether or not output detailed messages. */
    int verbose = 0;

    /* remember name of the program, which will include into the messages.
     * it keeps in the argv[0] element
     */
    program_name = argv[0];

    do {
        next_option = getopt_long(argc, argv, short_options, long_options, NULL);

        switch(next_option) {
            case 'h': /* -h or --help */
            /* user asked usage info, need to output it into the stdout
             * and exit with code 0 (normal exited) */
                print_usage(stdout, 0);

            case 'o': /* -o or --output */
            /* this option takes arg -- name of the output file. */
                output_filename = optarg;
                break;

            case 'v': /* -v or --verbose */
                verbose = 1;
                break;

            case '?': /* user input wrong option */
            /* write info about usage into the stderr and exit
             * with code 1 (crash). */
                print_usage(stderr, 1);

            case -1: /* there is no options anymore. */
                break;

            default: /* somewhat strange. */
                abort();
        }
    }
    while(next_option != -1);

    /* option handling completed, OPTIND variable points on the 
     * first argument, which isn't an option.
     * print these arguments with demonstraite aim, if VERBOSE flag set. */

    if(verbose) {
        int i;

        for(i = optind; i < argc; ++i)
            printf("arguments: %s\n", argv[i]);
    }
    /* further will be main body of the program" */
    return 0;
}
