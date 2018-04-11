FLAGS = -Wall -std=c99

compute_hash: compute_hash.o hash_functions.o
	gcc ${FLAGS} -o $@ $^

%.o : %.c
	gcc ${FLAGS} -c $<

clean : 
	rm *.o compute_hash
