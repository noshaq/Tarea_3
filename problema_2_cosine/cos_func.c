int i,n;
double x,suma,t;


double cos_series(double x, int n)
{
  
  /*
   * Serie de Maclaurin para cos x
   * cos x= 1- x^2/2! + X^4/4....
   */
  
  for(i=1; i < n + 1; i++)
  {
   
    t = t * (pow(-1, (2 * i - 1)) * x * x) / (2 * i * (2 * i - 1)) ;  
    suma = suma + t ; 
       
  }
  
  return suma; 
  
}
 
