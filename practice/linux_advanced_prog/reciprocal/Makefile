reciprocal: main.o reciprocal.o
		cc $(CFLAGS) -o reciprocal main.o reciprocal.o

main.o: main.c reciprocal.hpp
		cc $(CFLAGS) -c main.c

reciprocal.o: reciprocal.cpp reciprocal.hpp
		cc $(CFLAGS) -c reciprocal.cpp

clean:
		rm -f *.o reciprocal
