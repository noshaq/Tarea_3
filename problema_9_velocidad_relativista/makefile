CC = gcc 
CFLAGS = -c -O3 
LFLAGS = -lm -L/opt/local/lib -Wl,-R 


ejecuta: masa_rel
	./masa_rel.x
	
masa_rel: main_velocidad_relativista.c
	  echo "Working...  $@"
	  $(CC) $(CFLAGS) $< -o $@.o
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
