try_to_open_some_file: main.o
		cc $(CFLAGS) -o try_to_open_some_file main.o

main.o: main.c
		cc $(CFLAGS) -c main.c

clean:
		rm -f *.o try_to_open_some_file
