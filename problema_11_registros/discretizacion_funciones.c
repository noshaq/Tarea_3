#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//*************************************************************************  
/*
 * declaracion de funciones
 * 
 * f1= sin(alpha) * x + cos(alpha) * y
 */
//*************************************************************************  


double t1_alternativa1(int i)
{

   t_end1a= i/delta;
  
   for(i=1; i < t_end1a; ++i )
   {
     double x =  i*delta;
     double y =  i*delta;
     
     t1a = sin(alpha) * x + cos(alpha) * y;   
       
   }

 return t_end1a;
  
}

//*************************************************************************  
/*segunda funcion
 * 
 * t2 = ­cos(alpha) * x + sin(alpha) * y
 */
//*************************************************************************  

 double t2_alternativa1(int i)
 {
  
   
    t_end2a= i/delta;
 
   
    for(i=1; i < t_end2a; ++i )
    {
      double x =  i*delta;
      double y =  i*delta;
      
      t2a = - cos(alpha) * x + sin(alpha) * x ;
   
        
    }
 
  
 return t_end2a;
   
 }

//*************************************************************************  
/*tercera funcion
 * s=sin(alpha)
 */ 
//*************************************************************************   

 double t1_alternativa2(int i)
 {
  
   
    t_end1b= i/delta;
 
   
    for(i=1; i < t_end2a; ++i )
    {
      double x =  i*delta;
      double y =  i*delta;
      
      t1b = s * x + c * y;
   
        
    }
 
  
 return t_end1b;
   
 }


//*************************************************************************  
/*Cuarta funcion
 * c=cos(alpha)
 * t2 = ­c * x + s * y
 */
//*************************************************************************  

 double t2_alternativa2(int i)
 {
  
   
    t_end2b= i/delta;
 
   
    for(i=1; i < t_end2a; ++i )
    {
      double x =  i*delta;
      double y =  i*delta;
      
      t2b = - c * x + s * x ;

        
    }
 
  
 return t_end2b;
   
 }
