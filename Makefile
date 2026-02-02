all:
	gcc -I. src/*.c -o bin/swiss-c

run: all
	./bin/swiss-c


clean:
	rm -f bin/swiss-c

