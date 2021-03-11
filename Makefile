tokenizer.o: gui.c tokenizer.h
	gcc -c tokenizer.c

gui.o: gui.c tokenizer.h
	gcc -c gui.c

history.o: history.c history.h
	gcc -c history.c

project: tokenizer.o gui.o
	gcc -o test tokenizer.o gui.o

clean:
	rm -f test *.o *~ *#
