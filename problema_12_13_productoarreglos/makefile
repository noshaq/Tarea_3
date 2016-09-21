CC=gcc 

CFLAGS=-c -O3 
LFLAGS=-lm -L/opt/local/lib -Wl,-R 

ARGS=10


ejecuta: main_producto_arreglos
	./$<.x  $(ARGS)
main_producto_arreglos: main_producto_arreglos.c
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
