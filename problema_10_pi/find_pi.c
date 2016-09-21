/*
 * programa: find_pi.c
 * calcula pi usando dos aproximaciones 
 * diferentes descritas en tarea3.pdf
 * 
 * Mediante linea de comandos se ingresa 
 * el numero de términos en la serie
 * e imprime en pantalla los valores 
 * calculados de pi
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int orden_serie,i,n;
double aux_pi1,aux_pi2,f_rad;


double recursive_rad(int n, double orden_serie);

double pi1(double orden_serie);

double pi2(double orden_serie);

int main(int argc,char *argv[])
{
  

if(argc !=2)
 {
     printf("Error----> less than expected (2) parameters\n"); 
      printf("----> %s ,orden_serie\n",argv[0]); 
      exit(0);
    }
  
  orden_serie = atoi(argv[1]);

// printf("%d %d\n ",argc,orden_serie);
  
//Llamada a las funciones con las rutinas

  
  pi1(orden_serie);
  printf("%d %lf\n",n,f_rad);


  pi2(orden_serie);


  
  printf("----> El valor calculado de pi usando el primer metodo es: pi=%lf\n",aux_pi1);
  
  printf("-----> El valor calculado de pi en math.h es : pi_math=%lf\n", M_PI);
  printf("-----> Pi_math.h/Pi_m2 =%lf\n \n \n ",M_PI/4*aux_pi1);
  
  // se multiplica por 4 ya que  pi/4 = 1-1/3+1/5 (ver tarea3.pdf)
  printf("----> El valor calculado de pi usando el segundo metodo es: pi=%lf\n",4*aux_pi2);
  
  printf("-----> El valor calculado de pi en math.h es : pi_math=%lf\n", M_PI);
  printf("-----> Pi_math.h/Pi_m2 =%lf\n",M_PI/4*aux_pi2);

  
 return 0; 
}

/*Se usa una funcion recursiva para calcular sqrt(2+sqrt(2+sqrt(..))
 * hasta que n= orden_serie
 */


double recursive_rad(int n,double orden_serie)
{
  n=1;
  if(n <= orden_serie)
  {
    return 2+sqrt(2+recursive_rad(n,orden_serie));
  }
  

    return sqrt(2);


}

//Forma 1, raices anidadas (ver tarea3.pdf)

 double pi1(double orden_serie)
 {
   
    double aux_pi;

    aux_pi=(sqrt(2 +recursive_rad(n,orden_serie) )/2.0);

     return aux_pi;
   
 }


 //Forma 2: pi/4 = 1-1/3+1/5 (ver tarea3.pdf)
 

double pi2(double orden_serie)
{
  
  aux_pi2 = 1;
  
  for(i=1;i<=orden_serie;i++)
  {
   
    aux_pi2 = aux_pi2 + pow((double)(-1),(double)(i))/((double)(2*i+1));

  }
  
  return aux_pi2;
  
}
