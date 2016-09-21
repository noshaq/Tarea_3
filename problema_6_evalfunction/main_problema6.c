/*
 * programa : problema_6.c
 * 
 * Este prorama evalua la función 
 * f(x)=sin(x)*ln(2*x+1)*sinh(x) 
 * en el intervalo [0,10] con un
 * paso delta_x ingresado por 
 * el usuario mediante scanf
 */



#include "func_prototipo.h"
#include "funcion.c"
#include "read_file.c"



int main()
{
  
  
  
  printf("Ingrese el tamano del paso (delta_x)\n");
  
  int s1 = scanf("%lf",&delta_x);
  
  if(delta_x <= 0.0001)
  {
    printf("paso muy pequeno, ingrese x>0.0001");
  }
  
  
  //Llamada a la funcion que evalua el polinomio

   funcion(delta_x);
   
   read_function();

  
}