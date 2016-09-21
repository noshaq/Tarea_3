#include <math.h>
#include <stdio.h>


double x , delta_x ,f;
int i;

double funcion(double delta_x)
{


  
  FILE *salidas;
  salidas = fopen("salidas.dat","w");
  
  /* el intervalo es de [0-10], por tanto se divide en 
   * delta_x segmentos
   */
  
  
  int t_end= 10/delta_x;
  
  for(i=1; i <= t_end; ++i )
  {
    
    /*
     * Se ejecuta x =  i*delta_x
     */
    
    x =  i*delta_x;
    
    f=sin(x)*log(2*x+1)*sinh(x);    
    
    fprintf(salidas,"%d %lf %lf\n",i,x,f);
    
  }
  
  
}




