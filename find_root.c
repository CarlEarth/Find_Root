
#include <stdio.h>
#include <stdlib.h>

//Define your function here.
float func(float x){
    float b;
    //f(x)=x^3-x^2-6
    b=x*x*x-x*x+6;
    return b;
}
int main(void)
{
    int i=0;
    float TOL= 0.001;
    float a,b,x,FP,FA;
    printf("function: x^3-x^2-6=0\n");
    printf("Please input the bound (min,max) of the root.\n");
    printf("Example: -100,100 \n");
    scanf ("%f,%f",&a,&b);
    printf("input the TOL (Try 0.000001)\n");
    scanf("%f",&TOL);
    FA=func(a);
    while (i<100)
    {
          x=a+(b-a)/2;
          FP=func(x);
          if ((b-a)/2<TOL)
          {
                   i=101;
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
    printf("%f is the root of the equation.\n",x);
    return 0;
}
                      
                   
                   
    
    
