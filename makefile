ALL: parsiranje
parsiranje: string.c uppercase.c
    gcc -o parsiranje string.c uppercase.c
uppercase.o
    gcc -o uppercase.c
string.o
    gcc -o string.c
    
.PHONY: clean
clean: 
    rm -f parsiranje *.o
