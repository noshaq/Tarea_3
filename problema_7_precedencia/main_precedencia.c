/*
 * programa: precedencia.c
 *
 * se calcula f(x) = ((sin(x)+cos(x))/2)*(a+b)
 * de 4 formas diferentes (f1,f2,f3,f4) para comprobar 
 * la importancia de la precedenca de operadores
 * 
 * El programa imprime los valores de f1,f2,f3,f4
 * 
 * se ingresa por teclado el punto x y los valores de a y b
 * 
 * Solucion:
 * 
 * La respuesta correcta para la función:
 * 
 * f(x) = ((sin(x) + cos(x))/2)
 * 
 * es:
 * fun4 = (sin(x) + cos(x)/2) *(a+b);
 * 
 * debido a que primero se evaluan las sumas 
 * ((sin(x) + cos(x))/2), luego se divide entre 2
 * luego  se efectua el producto con (a+b).
 * 
 * Opciones incorrectas:
 * 
 * -f1= sin(x) + cos(x)/2 *a+b;
 * se evalua sin(x) despues se suma 
 * al producto cos(x)/2 *a y luego se le suma b
 * 
 * -fun2 = sin(x) + cos(x)/2 *(a+b);
 * 
 * Se suma sin(x) a cos(x)/2 *(a+b)
 * 
 * -fun3 = (sin(x) + cos(x)/2) *a+b;
 *  se evalua primero (sin(x) + cos(x)/2) *a
 * y luego se suma a b
 * 
 */ 

#include <stdio.h>
#include <math.h>

// prototipos 
double f1(double x);
double f2(double x);
double f3(double x);
double f4(double x);


double x,a,b,fun1,fun2,fun3,fun4;


int main()
{
  printf("La función tiene la forma: ((sin(x) + cos(x))/2)\n \n");

  
  printf("Ingrese el numero x donde se evalua la funcion\n");
  int s1 = scanf("%lf",&x);
  
  printf("Ingrese a\n");
  int s2 = scanf("%lf",&a);  
  
  printf("Ingrese b\n");
  int s3 =  scanf("%lf",&b);
  
  // llamada a las funciones
  f1(x);
  f2(x);
  f3(x);
  f4(x);
  
/**********************************
 *Funcion 1
 */  
  printf("La función (1) es: sin(x) + cos(x)/2 *a+b=\n \n");

  printf("El valor de f1 es: %lf\n",fun1);

/**********************************
 *Funcion 2
 */ 
  
  printf("La función (2) es: sin(x) + cos(x)/2 *(a+b)=\n \n");

  
  printf("El valor de f2 es: %lf\n",fun2);

/**********************************
 *Funcion 3
 */ 
  
  printf("La función (3) es: (sin(x) + cos(x)/2) *a+b=\n \n");

  
  printf("El valor de f3 es: %lf\n",fun3);

/**********************************
 *Funcion 4
 */   
    printf("La función (4) es: (sin(x) + cos(x)/2) *(a+b)=\n \n");

  
  printf("El valor de f4 es: %lf\n\n",fun4);

  printf("La respuesta correcta es f4\n");

  
 return 0; 
}

//funciones

double f1(double x)
{
   
 fun1 = sin(x) + cos(x)/2 *a+b;
  
  return fun1;
}

//******************************************

double f2(double x)
{
   
 fun2 = sin(x) + cos(x)/2 *(a+b);
  
  return fun2;
}

//******************************************


double f3(double x)
{
   
 fun3 = (sin(x) + cos(x)/2) *a+b;
  
  return fun3;
}

//******************************************


double f4(double x)
{
   
 fun4 = ((sin(x) + cos(x))/2) *(a+b);
  
  return fun4;
}




