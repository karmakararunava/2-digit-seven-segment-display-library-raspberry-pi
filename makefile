%.o: %.c *.h
	gcc -c *.c -I./
liboneDigitCC.a: *.o
	ar -cvq liboneDigitCC.a *.o
clean:
	rm -f *.o *.a
