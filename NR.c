/*header files*/
#include<stdio.h>
#include<math.h>
/*Function define f(x) and f'(x) as d(x)*/
#define f(x) ((x*x*x*x)-(x*x*x)+(10*x)+7)
#define d(x) ((4*x*x*x)-(3*x*x)+10)
/*main begins*/
void main()
{
    int step;
    double dl=1e-3,xi;
    double a,b,x0,dx;
    a=-2;
    b=-1;
    x0=(a+b)/2;
    step=0;
    while(fabs(xi-x0)>dl)
    {
        dx=f(x0)/d(x0);
        xi=x0;
        x0=x0-dx;
        step++;
    }
    printf("step = %2d, Root = %0.7f\n",step,x0);
}
