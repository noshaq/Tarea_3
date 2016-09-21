CC=gcc 

CFLAGS=-c -O3 
LFLAGS=-lm -L/opt/local/lib -Wl,-R 

ARGS=10
  
ejecuta: find_pi
	./$<.x  $(ARGS)
find_pi: find_pi.c
	  echo "Working...  $@.c"
	  $(CC) $(CFLAGS) $@.c -o $@.o
	  $(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
clean:

	rm -rf $(PROGRAM)
	rm -rf *-
	rm -rf *.out	
	rm -rf *#
	rm -rf *.o	
	rm -rf *.a	
	rm -rf *.so	
	rm *.x	
