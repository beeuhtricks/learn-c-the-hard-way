CFLAGS=-Wall -g

all:
	make ex1
	make ex3
	make ex7
	make ex8
	make ex9

clean:
	rm -rf *.dSYM
	rm -f ex1
	rm -f ex3
	rm -f ex7
	rm -f ex8
	rm -f ex9
