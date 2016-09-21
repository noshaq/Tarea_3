#include <math.h>

double vx ,c,m,m0;

double i=1.0;

double masa_relativista(double delta_v)
{
   m0=1.0; //Masa en reposo = 1 kg
   c=300000.0; //Velocidad de la luz m/s

  
  FILE *masa_rel;
  masa_rel = fopen("m_relativista.dat","w");
  
   int t_end= 300000/delta_v;

  
   for(i=1; i < t_end; ++i )
   {
     vx =  i*delta_v;
     m = (m0/sqrt(1.0-((vx*vx)/(c*c))));    
    
    fprintf(masa_rel,"%0.2lf %lf %lf\n",vx,vx/c,m);
   
   }
     
 
  
 fclose(masa_rel); 
 
 return m;
  
}
