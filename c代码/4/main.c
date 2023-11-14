/*double hhh(int n,double x)
{
    double p;
    if(n==0)
    {
        p = 1;
    }
    else if(n==1)
    {
        p = x;
    }
    else
    {
         p = ((2*n - 1)*x*(hhh(n-1,x)) - (n - 1)*(hhh(n-2,x)))/n;
    }
    return p;
}

int main()
{
    int n = 0;
    double x = 0;

    do
    {
        scanf("%d",&n);
    }while(n < 0);
    scanf("%lf",&x);
    printf("%lf",hhh(n,x));
    return 0;
}

/*#include<stdio.h>

double fun(int n,double x)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return x;
    else
        return ((2*n - 1)*fun(n - 1,x) - (n - 1)*fun(n - 2,x))/n;
}
int main()
{
    int n;
    double x;
    scanf("%d %lf",&n,&x);
    printf("%.6lf",fun(n,x));
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/
