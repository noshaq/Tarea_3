int i,x;

unsigned long long fac;
int factorial(int x)
{
  
  fac=1;
  
   if (x < 0)
   {   printf("Error, el factorial de un número negativo no existe\n ");
       printf("Error, no se puede realizar la expansion si el orden es negativo\n ");
       exit(0);
   }  
     if (x > 63)
   {   printf("Error, factorial de un numero muy grande, ingrese x<63\n ");
       exit(0);
   }
    else
    {
        for(i=1; i<=x; ++i)
        {
            fac *= i;              // factorial = factorial*i;
        }
    }

    return fac;
  
}