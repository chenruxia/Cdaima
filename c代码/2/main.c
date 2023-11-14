




/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int count = 1, guess, number;
	srand(time(NULL));
	guess = rand() % 100 + 1;
	printf("这是第1次猜数，请输入所猜的数:");
	scanf("%d", &number);
	while (guess != number)
	{
		if (guess > number) printf("你猜的数小了！\n");
		else printf("你猜的数大了！\n");
		count++;
		printf("这是第%d次猜数，请输入所猜的数:",count);
		scanf("%d", &number);
	}
	printf("恭喜你猜对了！这个数是%d。\n",number);
	printf("你猜的次数是%d。\n",count);
	return 0;
}


/*#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];

    // 填充数组
    int num = 1;
    for (int layer = 0; layer < (n + 1) / 2; layer++)
    {
        for (int i = layer; i < n - layer; i++)
        {
            matrix[layer][i] = num++;
        }
        for (int i = layer + 1; i < n - layer; i++)
        {
            matrix[i][n - layer - 1] = num++;
        }
        for (int i = layer + 1; i < n - layer; i++)
        {
            matrix[n - layer - 1][n - i - 1] = num++;
        }
        for (int i = layer + 1; i < n - layer - 1; i++)
        {
            matrix[n - i - 1][layer] = num++;
        }
    }

    // 输出结果
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i = 0;
    int j = n -1;
    int count = 0;
    arr[i][j] = ++count;
    while(count <= n*n)
    {
        if(j > 0)
        {
            j--;
        }
        arr[i][j] = ++count;
        while(i <= n - 1&&j > 0&&j <= n - 1)
        {
            j++;
            i++;
            arr[i][j] = ++count;
        }
        if(i < n - 1)
        {
            i++;
        }

        arr[i][j] = ++count;
        while(i >= 0&&j <= n - 1)
        {
            i--;
            j--;
            arr[i][j] = ++count;
        }
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i;
    int j;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(i < j)
            {
                arr[i][j] = i + 1;
            }
            else
            {
                arr[i][j] = j + 1;
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}



/*#include<stdio.h>
int main()
{
    int arr[6][6];
    int i;
    int j;
    for(i = 0;i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            if(i == j)
            {
                arr[i][j] = 1;
            }
            else if(i == j + 1)
            {
                arr[i][j] = 2;
            }
            else if(i == j + 2)
            {
                arr[i][j] = 3;
            }
            else if(i == j + 3)
            {
                arr[i][j] = 4;
            }
            else if(i == j +4)
            {
                arr[i][j] = 5;
            }
            else if(i == j + 5)
            {
                arr[i][j] = 6;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    for(i = 0;i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}



/*#include<stdio.h>
int main()
{
    int arr[3][4] = {0};
    int i;
    int j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    for(j = 0;j < 4;j++)
    {
        int tmp;
        tmp = arr[0][j];
        arr[0][j] = arr[2][j];
        arr[2][j] = tmp;
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}


/*char n = '*';
printf("%c",n);
或者
printf("*");



#include<stdio.h>
int main()
{
    char n = '*';
    int i;
    int j;
    int k;
    for(i = 1;i <= 5;i++)
    {
        for(k = 1; k <= 5 - i;k++)
        {
            printf(" ");
        }
        for(j = 1;j <= 2*i - 1;j++)
        {
            printf("%c",n);
        }
        printf("\n");

    }
    return 0;
}



/*#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][4];

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    int m;
    for(i=0;i < 4;i++)
    {
        m = arr[0][i];
        arr[0][i] = arr[2][i];
        arr[2][i] = m;
    }
    for(i = 0;i < 3;i++)
    {

        for(j = 0;j < 4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}/*#include <stdio.h>
#include<stdlib.h>
#define M 81
int main( )
{
    char str[M];
    int c[M];
    int i,count = 0;
    char ch = 0;
    while(scanf("%c",&str[M]!=EOF))
    {
        for( i = 0; i < strlen(str); i++ )
            if( ch < str[i] )
                ch = str[i];
        for( i = 0; i < strlen(str); i++ )
            if( ch == str[i] )
                c[count++]=i;
        for(i=0;i<count;i++)
            printf(" %d ",c[i]);
    }
    printf( " \nmax = %c ,count =  %d\n",ch,count );

    return 0;
 }


/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    int count = 0;

    while (scanf("%s", str) != EOF)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] > 'A' && str[i] <= 'Z')
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}


/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    int count = 0;
    int max_count = 0;

    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'z')
            {
                count++;
            }
            else
            {
                if (count > max_count)
                {
                    max_count = count;
                }
                count = 0;
            }
        }
        if (count > max_count)
        {
            max_count = count;
        }
        count = 0;
    }
    printf("%d", max_count);
    return 0;
}



/*#include<stdio.h>
int main()
{
    char a[1000];
    int i = 0;
    while(scanf("%c",&a[i]!=EOF))
    {
        i++;
    }
    printf("%d",i);
    return 0;
}

/*#include<stdio.h>
int main()
{
    char s[100];
    char max;
    int i=1;
    int count = 0;
    scanf("%s",s);
    max=s[0];

    while(s[i]!='\0')
    {
        if(max<s[i])
            max=s[i];
        count++;
        i++;
    }
    printf("%d",count);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    int count = 0;
    int max_count = 0;
    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                count++;
            }
            else
            {
                if (count > max_count)
                {
                    max_count = count;
                }
                count = 0;
            }
        }

    }

    printf("%d", max_count);
    return 0;
}



/*#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i = 0;
    int sz = strlen(arr);
    int max=arr[0];
    int count=0;
    for(i=0;i < sz;i++)
    {
        scanf("%s",&arr[i]);
    }
    for(i=0;i<sz;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(i=0;i<sz;i++)
    {
        if(arr[i]==max)
        {
           count++;
        }
    }
    printf("%d",count);
    return 0;
}

/*void fun(char arr[])
{
	int i,j=0;
	for(i=0;i<strlen(arr)&&arr[i]=='*';i++)
	{
		arr[j++]=arr[i];
	}
	while(arr[i])
	{
		if(arr[i]!='*')
		  arr[j++]=arr[i];
		i++;
	}
	arr[j]='\0';
}
int main()
{
    char arr[100];
    scanf("%s",&arr);
    fun(arr);
    printf("%s\n",arr);
    return 0;
}




/*#include<stdio.h>
char fun(char m)
{

}
int main()
{
    char m;
    scanf("%s",&m);
    fun(m);
    printf("%s\n",);
    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char target;
    int count = 0;


    scanf("%s", str);

    scanf(" %c", &target);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    char m;

    int count = 0;
    scanf("%s",&arr);
    scanf(" %c",&m);

    int n = strlen(arr);
    for(int i = 0;i < n;i++)
    {
        if(arr[i]==m)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

/*#include <stdio.h>

int main()
{
    int nrows, ncols, col;
    double avg;
    int max_sum = 0;
    scanf("%d %d %d", &nrows, &ncols, &col);
    int arr[nrows][ncols];
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < nrows; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < ncols; j++)
        {
            row_sum += arr[i][j];
        }
        if (row_sum > max_sum)
        {
            max_sum = row_sum;
        }
    }
    for (int i = 0; i < nrows; i++)
    {
        avg += arr[i][col - 1];
    }
    avg /= nrows;
    printf("%.6lf %d", avg, max_sum);
    return 0;
}


#include<stdio.h>


int main()
{

    int nrows,ncols,col;
    int max_sum=0;
    double avg;
    scanf("%d %d %d",&nrows,&ncols,&col);
    int arr[nrows][ncols];
    for(int i=0;i < nrows;i++)
    {
        for(int j=0;j < ncols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<nrows;i++)
    {
        int row_sum = 0;
        for(int j=0;j<ncols;j++)
        {
            row_sum += arr[i][j];
        }
        if(row_sum > max_sum)
        {
            max_sum = row_sum;
        }
    }

    for (int i = 0; i < nrows; i++)
    {
        avg += arr[i][col - 1];
    }
    avg /= nrows;
    printf("%.6lf %d",avg,max_sum);
    return 0;
}


/*#include<stdio.h>
int main()
{
    int i;
    int arr[5]={0};
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max,min;
    max = min = arr[0];
    for(i = 0;i < 5;i++)
    {
        if(arr[i]<arr[min])
            min = i;
        if(arr[i]>arr[max])
            max = i;
    }

    int tmp = arr[max];
    arr[max] = arr[min];
    arr[min] = tmp;
    for(i=0;i < 5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}

#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i;
    int j;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(i < j)
                arr[i][j]=i + 1;
            else
                arr[i][j]=j + 1;
        }

    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    int a[N][N]={0};
    int i,j,k;
    for(i=0;i<N;i++)
    {
        int k=N-i;
        for(j=N-1;j>=0;j--)
        {
            a[j][i]=k;
            k--;
            if(k==0)
                break;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",a[i][j]);
        putchar('\n');
    }
return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
#define N 6
int  main ( )
{
	int a[N][N];
	int i,j,t=1;
	for(i=0;i<N;i++)
{
		t = i+1;
		for(j=0;j<i+1;j++)
			a[i][j] = t--;
	}
	for(i=0;i<N;i++)
{
		for(j=0;j<N;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
    system("pause");
	return 0;
}


#include<stdio.h>
int main()
{
    int arr[6][6]={0};
    int i,j;
    int t = 1;
    for(i = 0;i < 6;i++)
    {
        t = i + 1;
        for(j = 0;j<i+1;j++)
        {
            arr[i][j] = t--;
        }
    }
    for(i = 0;i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int  main ( )
{
	int a[3][4] = {0, 2,9,7,5,13,6,8,	27,11,1,3};
	int i,j,temp;
	for(i=0,j=0;j<4;j++)
{
		temp = a[i][j];
		a[i][j] = a[i+2][j];
		a[i+2][j] = temp;
	}
	for(i=0;i<3;i++)
{
		for(j=0;j<4;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
    system("pause");
	return 0;
}



#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][4];

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    int m;
    for(i=0;i < 4;i++)
    {
        m = arr[0][i];
        arr[0][i] = arr[2][i];
        arr[2][i] = m;
    }
    for(i = 0;i < 3;i++)
    {
        getchar();
        for(j = 0;j < 4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("");
    }
    return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a = -10, b = 10, c, f1, f2, f3;
    f1 = 2*a*a*a - 4*a*a + 3*a - 6;
    f2 = 2*b*b*b - 4*b*b + 3*b - 6;
    do
    {
        c = (a + b) / 2;
        f3 = 2*c*c*c - 4*c*c + 3*c - 6;
        if(f1*f3 < 0)
        {
            b = c;
            f2 = f3;
        }
        else
        {
            a = c;
            f1 = f3;
        }
    } while(fabs(f3) >= 1e-6);
    printf("%lf\n", c);
    return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int fun(int);
int main()
{
	int w;
	scanf("%d",&w);
	printf("%d\n",fun(w));
	system("pause");
	return 0;
}
int fun(int w)
{
	int n=1,p=1,m;
	m=w;
	while(m>10)
	{
		m=m/10;
		p=p*10;
		n++;
	}
	return w%p;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int hhh(unsigned int w)
{
    int n = 1;
    int p = 1;
    int m;
    m = w;
    while(m >10)
    {
        m = m/10;
        p = p*10;
        n++;
    }
    return w%p;

}
int main()
{
    unsigned int w = 0;

    scanf("%d",&w);

    printf("%d",hhh(w));

    return 0;
}

/*#include <stdio.h>

int main()
{
    double s;
    int n, i;
    scanf("%lf %d", &s, &n);
    for (i = 1; i <= n; i++)
    {
        double x = s * 0.053;
        double y = s + x;
        printf("%d %.6lf %.6lf\n", i, x, y);
        s = y;
    }
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
double li(double s)
{
    return s*0.053;
}
void hhh(double s,int n)
{
    int j;
    for(j=1;j<=n;j++)
    {
        printf("%d  %.2lf  %.2lf\n",j,li(s),li(s)*j+s);
    }
}
int main()
{
    double s;
    int n;
    scanf("%lf %d",&s,&n);
    hhh(s,n);
    return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
double fun(int,double);
int main()
{
	int n;
	double x;
    do
	{
		scanf("%d",&n);
	}while(n<0);
	scanf("%lf",&x);
	printf("%lf\n",fun(n,x));
	system("pause");
	return 0;
}
double fun(int n,double x)
{
	double pn;
	if(n==0)
		pn=1;
	else if(n==1)
		pn=x;
	else
		pn=((2*n-1)*x*fun(n-1,x)-(n-1)*fun(n-2,x))/n;
	return pn;
}


/*#include<stdio.h>
#include<stdlib.h>
int p2(int x);
int p1(int x)
{
    int n;
    int t;
    if(n == 2)
    {
        return x;
    }
    else
    {
        t = ((2*n - 1)*x*(p1(x)) - (n - 1)*(p2(x)))/n;
        return t;
    }
}
int p2(int x)
{
    int n;
    int t;
    if(n == 2)
    {
        return 1;
    }
    else if(n == 3)
    {
        return x;
    }
    else
    {
        t = ((2*n - 1)*x*(p1(x)) - (n - 1)*(p2(x)))/n;
        return t;
    }
}
double hhh(int n,double x)
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
#include<stdlib.h>
#include<time.h>
void menu()
{
    printf("*********************\n");
    printf("****1.play 0.exit****\n");
    printf("*********************\n");
}
void game()
{
    int ret = 0;
    int guess = 0;
    srand((unsigned int)time(NULL));
    ret = rand()%100 + 1;
    while(1)
    {
        printf("请猜数字：>");
        scanf("%d",&guess);
        if(guess > ret)
        {
            printf("")
        }
    }
}


/*#include<stdio.h>
int main()
{
    int n=0;
    int m=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    m = n%10;
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:printf("这个数是奇数\n");break;
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:printf("这个数是偶数\n");break;
        default:
            break;
    }

    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a;
double b;
double c;
double delta;
void f1(double a,double b,double c,double delta);
void f2(double a,double b,double c,double delta);
void f3(double a,double b,double c,double delta);
int main()
{


    scanf("%lf %lf %lf",&a,&b,&c);
    delta= b*b - 4*a*c;
    if(delta>0)
    {

        f1(a,b,c,delta);

    }
    else if(delta==0)
    {

        f2(a,b,c,delta);

    }
    else
    {

        f3(a,b,c,delta);

    }
    return 0;
}
void f1(double a,double b,double c,double delta)
{
    double x1,x2;
    {


    delta= b*b - 4*a*c;
    x1 = ((-b + sqrt(delta))/(2*a));
    x2 = ((-b - sqrt(delta))/(2*a));
    printf("%.2lf %.2lf\n",x1,x2);
    }
}
void f2(double a,double b,double c,double delta)
{
    double x1,x2;
    {


    x1 = (-b/(2*a));
    x2 = (-b/(2*a));
    printf("%.2lf %.2lf\n",x1,x2);
    }
}
void f3(double a,double b,double c,double delta)
{
    double x1,x2;
    {
    delta= b*b - 4*a*c;
    x1 = (-b/(2*a));
    x2 = (sqrt(-delta))/(2*a);
    printf("%.2lf+i*%.2lf\n",x1,x2);
    printf("%.2lf-i*%.2lf\n",x1,x2);
    }
}

/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void f1(double,double,double,double);
void f2(double,double,double,double);
void f3(double,double,double,double);
int main()
{
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);

	d=b*b-4*a*c;
	if(d>0)
		f1(a,b,c,d);
	else if(d==0)
		f2(a,b,c,d);
	else
		f3(a,b,c,d);

	return 0;
}
void f1(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("%.2lf ,%.2lf\n",x1,x2);
	}
}
void f2(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=-b/(2*a);
		x2=-b/(2*a);
		printf("%.2lf ,%.2lf\n",x1,x2);
	}
}
void f3(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=-b/(2*a);
		x2=sqrt(-d)/(2*a);
		printf("%.2lf+i*%.2lf\n",x1,x2);
		printf("%.2lf-i*%.2lf\n",x1,x2);
	}
}




double calculate_approximation(double x, double eps) {
double result = 0;
double term = 1;
int n = 1;

    while (fabs(term) > eps)
    {
        if (n % 2 == 0)
        {
            result -= term;
        }
        else
        {
            result += term;
        }
        term *= (x * x) / ((2 * n + 1) * (2 * n));
        n++;
    }

    return result;
}

int main()
{
    double x, eps;
    scanf("%lf %lf", &x, &eps);
    double approximation = calculate_approximation(x, eps);
    printf("%.6lf", approximation);
    return 0;
}*/






/*#include<stdio.h>
#include<math.h>

int main()
{
	int n=2;
	double eps,t,s=0,x;
	scanf("%lf %lf",&x,&eps);
	t=x;
    s=t;
	while(fabs(t/2*n)>=eps)
	{
		t=-t*(2*n-3)*x*x/(2*n-2);
		s=s+t/(2*n);
		n++;
	}
	printf("%.6lf\n",s);

	return 0;
}





/*int main()
{
    int s = 0;
    int t =0;
    int p = 1;
    scanf("%d",&s);
    while(s!=0)
	{
		if((s%10)%2!=0)
		{
			t=t+(s%10)*p;
			p=p*10;
		}
		s=s/10;
	}
    printf("%d",t);


    return 0;
}

/*
#include <math.h>

int main() {
    double x, eps;
    scanf("%lf %lf", &x, &eps);

    double result = 0;
    int n = 1;
    for (int i = 1; ; i++)
    {
        double term = (2*n - 3)*x*x/(2*n - 2);
    /*while (1)
    {
        double term = ((-1) * n) * (2 * (n - 1)) * (4 * n) / (3 * n) * (6 * (n + 1));
        if (fabs(term) < eps)
        {
            break;
        }
        result += term;
        n++;
    }

    printf("%.6lf", result);
    return 0;
}
*/



/*#include<stdio.h>
#include<math.h>
int main()
{
    int n = 2;
    double x;
    double eps;
    double sum = 0;
    double f;
    double a=-1,c;
    c = pow(a,n-1);
    scanf("%lf %lf",&x,&eps);
    f = x;
    sum = f;
    while(fabs(f/2*n)>=eps)
    {

        f = f*(2*n - 3)*x*x/(2*n - 2)*c;
        sum = sum +f/2*n;
        n++;

    }
    printf("%.6lf",sum);
    return 0;
}
*/




/*
int main()
{
    int n = 0;
    int j = 0;

    int r = 0;

    scanf("%d",&n);
    for(j = 2;j <= n;j++)
    {
        if(n%j == 0)
        {
            for(r = 2;r < j;r++)
            {
                if(j%r == 0)
                {
                    break;
                }
            }
            if(j==r)
            {
                printf("%d ",j);
            }
        }

    }
}
*/

