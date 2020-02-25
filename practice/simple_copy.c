#include </Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include/sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char *argv[]);    /* ANSI-prototype */

#define BUF_SIZE    4096             /* use buffer size of 4096 byte */
#define OUTPUT_MODE 0700             /* security bits of output file */

int main(int argc, char *argv[])
{
    int in_fd, out_fd, rd_count, wt_count;
    char buffer[BUF_SIZE];

    if (argc != 3) exit(1);          /* syntax error */

    /* opening input and creation of output file */
    in_fd = open(argv[1], O_RDONLY);          /* opening source file */
    if (in_fd < 0) exit(2);                   /* if it'll not open, exit */
    out_fd = creat(argv[2], OUTPUT_MODE);     /* creation of receive-file */
    if (out_fd < 0) exit(3);                  /* if it'll not create, exit */

    /* copy loop */
    while (true) {
        rd_count = read(in_fd, buffer, BUF_SIZE);    /* read bunch of data */
        if (rd_count <= 0) break;    /* exit from loop when EOF or error occure*/
        wt_count = write(out_fd, buffer, rd_count);  /* data writing */ 
        if (wt_count <= 0) exit(4);
    }
    
    /* closing files */
    close(in_fd);
    close(out_fd);
    if (rd_count == 0)    /* error doesn't appear during last reading */
        exit(0);
    else
        exit(5);          /* error during the last reading */
}
