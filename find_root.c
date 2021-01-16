
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;
    float a,b,TOL,x,FP,FA;
    printf("Please input the bound of the a,b\n");
    scanf ("%f %f",&a,&b);
    printf("input the TOL\n");
    printf("function =a^3+4^2-10=0\n");
    scanf("%f",&TOL);
    FA=a*a*a+4*a*a-10;
    float d=(b-a)/2;
    while (i<60)
    {
          x=a+(b-a)/2;
          FP=x*x*x+4*x*x-10;
          if (d<TOL)
          {
                   printf("%f,%f\n",d,TOL);
                   printf("P是%f\n",x);
                   i=61;
          }         
          if (FA*FP>0)
          {
                      a=x;
                      FA=FP;
          }
          else 
          {
               b=x;
          } 
          i=i+1;
    }
    printf("%f is the root of the number\n",x); 
    //system("PAUSE");
    return 0;
}
                      
                   
                   
    
    
