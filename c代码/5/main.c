#include<stdio.h>
double fun(int n,int x)
{
    int result;
    if(n == 0)
    {
        result = 1;
        return result;
    }
    else if(n == 1)
    {
        result = x;
        return result;
    }

    else
    {
        result = ((2*n - 1)*x*fun(n - 1,x) - (n - 1)*fun(n - 2,x))/n;
        return result;
    }

}
int main()
{
    int n;
    int x;
    scanf("%d %d",&n,&x);
    printf("%.6lf",fun(n,x));
    return 0;
}
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
}*/


