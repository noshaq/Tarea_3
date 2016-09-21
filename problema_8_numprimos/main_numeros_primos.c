/*
 * 
 * programa : numeros_primos.c
 * 
 * Calcula los numeros primos 
 * entre 1 y N, donde N es
 * introducido por el usuario 
 * via teclado con scanf
 * 
 * El codigo calcula si los numeros 
 * entre 1 y N_max son divisibles por 
 * j. Si lo es entonces sum++.
 * 
 * 
 * Después el código verifica si
 * sum=2, en caso de que sea cierto
 * el numero i será un primo.
 * 
 */

#include<stdio.h>
void main()
{
  
  
  int N_max,i,j,sum;
  
  i=1;
  
  printf("Ingrese la cota máxima para buscar números primos N_max : ");
  
  int s1 =scanf("%d",&N_max);
  
  printf("Los numeros primos entre 1 y %d :\n",N_max);

  while(i<=N_max)
   {
     sum=0;
     
     for(j=1;j<=i;j++)
      {
	if(i%j==0) 
	sum++;
      }
      
      if(sum==2) 
      {
	printf("\n %d \n ",i);
      }
      i++;
     
    }

  
}