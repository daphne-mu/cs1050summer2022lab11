a.out : lab11.o libfight.a
	compile lab11.o -lfight -L.

lab11.o : lab11.c
	compile -c lab11.c

clean :
	@rm -f *.o
	@rm -f a.out
