LIB = -lm 
OPT = -Wall

out: Binare_tree.o 
	gcc Binare_tree.o -o out
 
Binare_tree.o: Binare_tree.c
	gcc -c Binare_tree.c -o Binare_tree.o

all: $(OUTPUT)

clean: $(OUTPUT)
	rm $(OUTPUT) *.o







