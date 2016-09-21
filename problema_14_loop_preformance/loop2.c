#include <stdio.h>
#include <math.h>
#include <time.h>

double loop2(int N )
{
  
   double x[N];
   x[1]=1.0;
  
   double start = clock();
  
   
   for(i=1;i < N; i++ )
   {
     
     for(loop = 0; loop < 10; loop++)
      {
       x[i-1]=121*loop*x[i];
	 
      }
     
   }
   

   double end = clock();

   double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
   
   printf("---> El tiempo que tomo evaluar loop2 es:\n");
   printf("---> CPU_TIME_USED (segs)=%lf\n",cpu_time_used);
    
   return cpu_time_used;
  
}
 
 
