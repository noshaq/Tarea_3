#include <math.h>
int i,n;
double x,suma,k;


double sine_series(double x, int n)
{
  
  /*
   * Serie de Maclaurin para sin x
   *sin x= 1- x^3/3! + X^5/5!....
   */
  k=x; 
  suma=x;

  for(i=1; i < n + 1; i++)
  {
   
    k = (k * pow((-1), (2 * i - 1)) *x * x) / (2 * i * (2 * i + 1)) ; 
    suma = suma + k ; 
       
  }
  
  return suma; 
  
}
 
