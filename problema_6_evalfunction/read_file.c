#include <stdlib.h>
#include <stdio.h>

/*
 * Esta subrutina lee un archivo y
 * reserva de forma dinámica el espacio en memoria 
 * para los 
 */

int read_function()
{
  int c, read,n,array_size,l;
   
  //Lectura del archivo salidas.dat
  
  FILE *aa=NULL;    
  
  aa = fopen("salidas.dat","r");
  
  
  /*Contar el número de lineas en cada archivo 
  * para reservar en memoria el tamaño adecuado 
  */
  
  
    array_size = 0;
    
    //for(c = getc(archivo_entrada); c != EOF ; c = getc(archivo_entrada))                
    while((c=fgetc(aa)) != EOF)  
    {
      //c=getc(archivo_entrada);
         if(c == '\n')
	  array_size = array_size +1;
	 printf("%d %d\n",c, array_size);
    }	
    
    fclose(aa);
    
    array_size = (int) ceil(10.0/delta_x);
    
    int *r  = (int *) malloc((size_t) array_size*sizeof(int));
    double *xx = (double *) malloc((size_t) array_size*sizeof(double));
    double *fx = (double *) malloc((size_t) array_size*sizeof(double));
    
    // verificar si la memoria se ubicó de forma adecuada.
    
    if (r == NULL)           
    {
        printf("No se pudo ubicar memoria para r\n");
        exit(1);
    }
    
    if (xx == NULL)            
    {
        printf("No se pudo ubicar memoria para xx\n");
        exit(1);
    }

     if (fx == NULL)       
    {
        printf("No se pudo ubicar memoria para fx\n");
        exit(1);	
    }
        
 /*escritura de un archivo con f(x) en la primera 
  * columna y con el valor de x en la segunda
  */
  
  FILE *archivo_2=NULL;
  archivo_2 = fopen("archivo_dos_columnas.dat","w");

  aa = fopen("salidas.dat","r");
  
  printf("array_size %d\n",array_size);
  n=0;
   //while((l=fscanf(archivo_entrada, "%d %lf %lf",&r[n], &xx[n], &fx[n])) == 3);
   while(n<array_size)
      {
	int s2 = fscanf(aa,"%d %lf %lf", &r[n], &xx[n], &fx[n]);
        fprintf(archivo_2,"%lf %lf\n",fx[n],xx[n]);
        //printf("%d\n",l);

	n++;
      }
       
       
   free(r);
   free(xx);
   free(fx);
   
   fclose(archivo_2);
   fclose(aa);

  return 0;
  
}
