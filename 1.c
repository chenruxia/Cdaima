/*#include<stdio.h>
#define N 5
int main()
{
	int i;
	int arr[N];
	int max=0;
	int min=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<N;i++)
	{
		if(arr[max]<arr[i])
		{
			max=i;
		}
		if(arr[min]>arr[i])
		{
			min=i;
		}
	}
	printf("%d %d",arr[max],arr[min]);
	return 0;
 } 



/*#include<stdio.h>
#define N 5
int main()
{
	int i;
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);	
	}
	int max;
	int min;
	max=min=arr[0];
	for(i=1;i<N;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("%d %d",max,min);
	return 0;
}



/*#include<stdio.h>
#define N 100
int main()
{
	int arr[N];
	int n;
	int i=0;
	int j;
	while(n=getchar())
	{
		arr[i++]=n;
	}
	double avg;
	for(j=0;j<i;j++)
	{
		avg+=arr[j];
	}
	avg/=i;
	printf("%lf",avg);
	return 0;
}



/*#include<stdio.h>
#define N 100
int main()
{
	int arr[N];
	int n;
	int i,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			arr[j++]=i;	
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j;
	int p;
	int t=1;
	double sum=0;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		p=0;
		for(j=0;j<i;j++)
		{
			p+=i*pow(10,j);	
		}
		sum+=t*1.0/p;
		t=-t;
	}	
	
	printf("%lf",sum);
	return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	int m;
	int n;
	int p,q;
	scanf("%d %d",&a,&b);
	p=a;
	q=b;
	m=a%b;
	if(m==0)
	{
		if(a>b)
		{
			printf("%d和%d的最小公倍数为：%d",a,b,b);
		}
		else
		{
			printf("%d和%d的最小公倍数为：%d",a,b,a);
		}
		exit(0);
	}
	while(m)
	{
		a=b;
		b=m;
		m=a%b;
	}
	n=(p*q)/b;
	printf("%d和%d的最小公倍数为：%d",p,q,n);
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<=sqrt(1.0*n);i++)
	{
		if(n%i==0)
		{
			return 0;
			break;
		}
	}
	if(i>sqrt(1.0*n))
	{
		return 1;
	}
}
int fun(int n)
{
	int m;
	int p=0;
	while(n)
	{
		m=n%10;
		n/=10;
		p=p*10+m;	
	}
	is_prime(p);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n)==1&&fun(n)==1)
	{
		printf("该数为绝对素数"); 
	}
	else
	{
		printf("该数不为绝对素数"); 
	}
	return 0;
}


/*#include<stdio.h>
void hanoi(int n,char A,char B,char C)
{
	if(n==1)
	{
		printf("%d:%c->%c\n",n,A,C);
	}
	else
	{
		hanoi(n-1,'A','C','B');
		printf("%d:%c->%c\n",n,A,C);
		hanoi(n-1,'B','A','C');
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}



/*#include<stdio.h>
int fun(int n)
{
	int i;
	int p=1;
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
	int n;
	int p;
	scanf("%d",&n);
	p=fun(n);
	printf("%d",p);
	return 0;
}


/*#include<stdio.h>
int fun(int n)
{
	int t;
	if(n==0)
	{
		return 1;
	}
	else
	{
		t=n*fun(n-1);
		return t;
	}
	
	
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int p;
	p=fun(n)/(fun(m)*fun(n-m));
	printf("%d",p);
	return 0;
 } 


/*#include<stdio.h>
#include<math.h>
int is_prime(int i)
{
	int m;
	for(m=2;m<=sqrt(1.0*i);m++)
	{
		if(i%m==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i;
	for(i=2;i<=100;i++)
	{
		if(is_prime(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}



/*#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	is_prime(i);
	return 0;
}
int is_prime(int i)
{
	for(i=2;i<=100;i++)
	{
		int m;
		for(m=2;m<=sqrt(1.0*i);m++)
		{
			if(i%m==0)
			{
				break;
			}
		 }
		if(m>sqrt(1.0*i))
		{
			printf("%d ",i);
		 } 
		
	}
}


/*#include<stdio.h>
int fun(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",fun(fun(a,b),c));
	return 0;
}
int fun(int a,int b)
{
	int m;
	m=a%b;
	while(m!=0)
	{
		a=b;
		b=m;
		m=a%b;
	}
	return b;
}


/*#include<stdio.h>
#include<math.h>
int fun(int n,int m);
int main()
{
	int n;
	int m;
	scanf("%d",&n);
	printf("%d",fun(n,n--));
	return 0;
}
int fun(int n,int m)
{
	int p;
	for(p=1;m>0;m--)
	{
		p=p*n;
	}
	return p;
}

/*#include<stdio.h>
int fun(int a,int b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("%d %d",a,b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	fun(a,b);
	printf(" %d %d",a,b);
	return 0;
}



/*#include<stdio.h>
int fun(int a,int b)
{
	int max;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	return max;
}
int main()
{
	int a,b,c,d;
	int m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m=fun(fun(fun(a,b),c),d);
	printf("%d",m);
	return 0;
}


/*#include<stdio.h>
int fun(int a,int b)
{
	int m;
	m=a%b;
	while(m!=0)
	{
		a=b;
		b=m;
		m=a%b;
	}
	return b;	
}
int main()
{
	int a,b,c,d,m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d",fun(fun(fun(a,b),c),d));
	return 0;
}



/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	int m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m=a%b;
	while(m!=0)
	{
		a=b;
		b=m;
		m=a%b;
	}
	m=b%c;
	while(m!=0)
	{
		b=c;
		c=m;
		m=b%c;
	}
	m=c%d;
	while(m!=0)
	{
		c=d;
		d=m;
		m=c%d;
	}
	printf("%d",d);
	return 0;
 } 



/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d",a);
	
	return 0;
}


/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a>b?b:a;
	while(a%c!=0||b%c!=0)
	{
		c--;
	}
	printf("%d",c);
	 
	return 0;
 } 


/*#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		if(a<b)
		{
			b=b-a;
		}
	}
	printf("%d",a);
	return 0;
}


/*a说：“我不是小偷。”x!=1
b说：“c是小偷。”x==3
c说：“小偷肯定是d。”x==4
d说：“c在冤枉人。”x!=4
现在已经知道4个人中3人说的是真话，一个说的是假话，那么谁是小偷？
#include<stdio.h>
int main()
{
	int x;
	for(x=1;x<=4;x++)
	{
		if((x!=1)+(x==3)+(x==4)+(x!=4)==3)
		{
			printf("%d",x);
		}
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				for(d=0;d<=1;d++)
				{
					if(a+b+c+d==1&&)
				}
			}
		}
	}
	return 0;
 } 


#include<stdio.h>
#include<math.h>
int main()
{
	double f1;
	double f2;
	double x0;
	double x=10;
	do
	{
		x0=x;
		f1=2*x0*x0*x0-4*x0*x0+3*x0-6;
		f2=6*x0*x0-8*x0+3;
		x=x0-f1/f2;//使用牛顿迭代法也可以计算// 
	}while(fabs(x-x0)>=1e-6);
	printf("%lf",x);
	return 0;
 } 


/*#include<stdio.h>
#include<math.h>
int main()
{
	double x=1.5;
	double x0;
	double h;
	double f;
	double fd;
	do
	{
		x0=x;
		f=2*x0*x0*x0-4*x0*x0+3*x0+6;
		fd=6*x0*x0-8*x0+3;
		h= f/fd;
		x=x0-h;
	}while(fabs(x-x0)>=1e-6);
	printf("所求方程的根为%lf",x);
	return 0;
}



/*#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int a=2;
	int b=1;
	int s=1;
	double sum;
	for(i=0;i<n;i++)
	{
		sum+=s*1.0*a/b;
		a=a+b;
		b=a-b;
		s=-s;
	}
	printf("%lf",sum);
	return 0;
}



/*#include<stdio.h>
int main()
{
	int n;
	int m;
	int t;
	scanf("%d",&n);
	int k=n;
	while(n)
	{
		m=n%10;
		t=t*10+m;
		n=n/10;
	}
	printf("%d ",t);
	if(t==k)
	{
		printf("该数字为回文数字");
	}
	else
	{
		printf("该数字不为回文数字");
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int i;
	int x=1;
	int y=1;
	int num;
	for(i=1;i<=20;i++)
	{
		printf("%12d %12d ",x,y);
		if(i%2==0)
		{
			printf("\n");
		}
		x=x+y;
		y=y+x;
	}
	return 0;
}


/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,p,q,n,p_flag,q_flag;
	scanf("%d",&n);
	if(n%2==1||n<4)
	{
		printf("数据输入出错\n");
		exit(0);
	}
	p=1;
	do
	{
		p=p+1;
		q=n-p;
		p_flag=1;
		for(i=2;i<=sqrt(1.0*p);i++)
		{
			if(p%i==0)
			{
				p_flag=0;
				break;
			}
		}
		q_flag=1;
		for(i=2;i<=sqrt(1.0*q);i++)
		{
			if(q%i==0)
			{
				q_flag=0;
				break;
			}
		}
	}while(p_flag*q_flag==0);
	printf("%d=%d+%d",n,p,q);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int j;
	int a,b;
	for(i=2;i<n;i++)
	{
		for(j=2;j<n;j++)
		{
			if(i+j==n)
			{
				for(a=2;a<i;a++)
				{
					if(i%a==0)
					{
						break;
					}
				}
				for(b=2;b<j;b++)
				{
					if(j%b==0)
					{
						break;
					}
				}
				if(a==i&&b==j)
				{
					printf("%d=%d+%d\n",n,i,j);
					exit(0);
				}
			}
		}
	}
	
	return 0;
}


/*#include<stdio.h>
#define pi 3.1415926
int main()
{
	int i;
	double area;
	for(i=1;i<=10;i++)
	{
		area=pi*i*i;
		if(area>100)
		{
			break;
		}
		printf("%.2lf ",area);
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		printf("%d ",i);
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int i,j,k,x,y,z;
	for(i=1;i<20;i++)
	{
		for(j=1;j<100/3;j++)
		{
			for(k=1;k<200;k++)
			{
				if(5*i+3*j+0.5*k==100&&i+j+k==100)
				{
					printf("%d只母鸡，%d只公鸡，%d只小鸡\n",i,j,k);
				}
			}
		}
	}
	
	return 0;
}



/*#include<stdio.h>
int main()
{
	int i;
	int j;
	printf("----------------------------------------------\n");
	for(i=1;i<10;i++)
	{
		printf("%5d",i);
	}
	printf("\n----------------------------------------------\n");
	for(i=1;i<10;i++)
	{
		printf("%d   ",i);
		for(j=1;j<10;j++)
		{
			printf("%-5d",i*j);
		}
		printf("\n");
	}
	printf("----------------------------------------------");
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int m;
	int n;
	int p;
	for(i = 100;i < 1000;i++)
	{
		m=i/100;
		n=(i-m*100)/10;
		p=i%10;
		if(i==pow(m,3)+pow(n,3)+pow(p,3))
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int i;
	int j;
	int k;
	for(i = 1;i < 10;i++)
	{
		for(j = 0;j < 10;j++)
		{
			for(k = 0;k < 10;k++)
			{
				if(pow(i,3) + pow(j,3) +pow(k,3) == i*100+j*10+k*1)
				{
					num = i*100+j*10+k*1;
					printf("%d ",num);
				}
			}
		}
	}
	return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	for(i = 2;i <= sqrt(1.0*n);i++)
	{
		if(n%i == 0)
		{
			printf("不是素数");
			break;
		}
	}
	if(i > sqrt(1.0*n)&&n != 1)
	{
		printf("是素数");
	}
	
	
	/*for(i = 2;i < n;i++)
	{
		if(n%i == 0)
		{
			printf("%d不是素数",n);
			break;
		}
	}
	if(i == n)
	{
		printf("%d是素数",n);
	}
	/*int i;
	int n;
	int k = 1;
	int sum = 1;
	scanf("%d",&n);
	if(n < 0)
	{
		printf("负数没有阶层");
		exit(0);
	}
	for(i = 2;i <= n;i++)
	{
		k = k*i;
		sum += k;
	}
	printf("%d",sum);
	
	
	return 0;
}


/*#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d",&a,&b);
	do
	{
		c = a%b;
		a = b;
		b = c; 
	}while(c!=0);
	printf("%d",a);
	/*while(c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d",b);
	while(b!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d ",a);
	
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int k;
	int count;
	int num;
	scanf("%d",&n);
	while(n%10!=0)
	{
		k = n%10;
		num = num*10 + k;
		n /= 10;	
	}
	printf("%d",num);
	return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k = 0;
	int x;
	int max;
	int min;
	int s = 0;
	double avg = 0;
	scanf("%d",&x);
	max = x;
	min = x;
	while(x >= 0)
	{
		s = s + x;
		k++;
		if(x > max)
		{
			max = x;
		}
		if(x < min)
		{
			min = x; 
		}
		scanf("%d",&x);
		
	}
	if(k > 0)
	{
		avg = (double)s/k;
		printf("学生人数 = %d,平均分 = %.2lf,最高分 = %d,最低分 = %d\n",k,avg,max,min);
	}
	return 0;
	
}
//60 65 70 80 85 56 75 88 90 10 -1


#include<stdio.h>
int main()
{
	int n = 0;
	double x;
	scanf("%lf",&x);
	double max = x;
	double min = x;
	double avg = 0;
	while(x >= 0)
	{
		avg += x;
		n++;
		if(max < x)
		{
			max = x;
		}
		if(min > x)
		{
			min = x;
		}
		scanf("%lf",&x);
	}
	if(n > 0)
	{
		avg /= n;
		printf("%d %.2lf %.2lf %.2lf",n,avg,max,min);
	}
	
	return 0;
}


/*#include<stdio.h>
struct student
{
	long num;
	char name[10];
	double score[3];
	double sum;	
};
int main()
{
	int i;
	int j;
	int k;
	double max = 0;
	double avg[3];
	struct student stu[10];
	for(i = 0;i < 10;i++)
	{
		scanf("%ld %s %lf %lf %lf",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		
	}
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 10;j++)
		{
			avg[i] += stu[j].score[i];
		}
		printf("%.2lf ",avg[i]/10);
	}
	printf("\n");
	for(i = 0;i < 10;i++)
	{
		
		for(j = 0;j < 3;j++)
		{
			stu[i].sum += stu[i].score[j];
		}
		if(max < stu[i].sum)
		{
			max = stu[i].sum;
			k = i;
		}		
	}
	printf("%ld %s %.2lf %.2lf %.2lf %.2lf",stu[k].num,stu[k].name,stu[k].score[0],stu[k].score[1],stu[k].score[2],stu[k].sum);
	return 0;
}


/*#include<stdio.h>
int main()
{
	char *s = "abcde";
	s += 2;
	printf("%s",s);
	return 0;
 } 


/*#include<stdio.h>
int main()
{
	int i;
	int j;
	int sum;
	int arr[7][8];
	for(i = 0;i < 7;i++)
	{
		for(j = 0;j < 8;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0;i < 7;i++)
	{
		sum = 0;
		for(j = 0;j < 8;j++)
		{
			sum += arr[i][j];
		}
		printf("%d ",sum);
	}
	return 0;
}


/*#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	char arr[N];
	gets(arr);
	puts(arr);
//	int num;
//	int i;
//	num = strlen(arr);
//	for(i = 0;i < num;i++)
//	{
//		printf("%c",arr[i]);
//	}
	return 0;
 } 



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	int month;
	scanf("%d %d",&year,&month);
	int day,num;
	if(year < 0||month < 1||month > 12)
	{
		printf("输入的数据错误");
		exit(0);
	}
	if(year%4 == 0&&year%100!=0||year%400 == 0)
	{
		num = 29;
	}
	else
	{
		num = 28;
	}
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;break;
		case 2:
			day = num;break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;break;
	}
	printf("%d",day);
	return 0;
}




/*#include<stdio.h>
int main()
{
	int money;
	int year;
	double sum;
	scanf("%d %d",&money,&year);
	switch(year)
	{
		case 1:
			sum = money + money*year*0.0225;
			break;
		case 2:
			sum = money + money*year*0.0279;
			break;
		case 3:
			sum = money + money*year*0.0333;
			break;
		case 5:
			sum = money + money*year*0.036;
			break;
		case 8:
			sum = money + money*year*0.0414;
			break;
		default:
			sum = money + money*year*0.003;
			break;
	}
	printf("%.2lf",sum);
	return 0;
}


/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	double a,b,c;
	double delta;
	double x1,x2;
	double p,q;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b - 4*a*c;
	if(a == 0)
	{
		printf("不是一元二次方程");
		
	}
	else
	{
		if(delta > 0)
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("%.2lf %.2lf",x1,x2);
		}
		else if(delta == 0)
		{
			x1 = x2 = -b/(2*a);
			printf("%.2lf %.2lf",x1,x2);
		}
		else
		{
			p = -b/(2*a);
			q = sqrt(-delta)/(2*a);
			printf("%.2lf + %.2lfi\n",p,q);
			printf("%.2lf - %.2lfi\n",p,q);
		}
	}
	return 0;	
}



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n <= 0)
	{
		printf("年份不为负数或0，请重新输入");
		exit(0); 
	}
	if(n%4 == 0&&n%100!=0||n%400 == 0)
	{
		printf("该年为闰年");
	}
	else
	{
		printf("该年不为闰年");
	}
	return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a <= 0||b <= 0||c <= 0)
	{
		printf("三角形的边不可为0或负，请重新输入！");
		exit(0); 
	 } 
	if(a + b <= c||a + c <= b||b + c <= a)
	{
		printf("构不成三角形"); 
		exit(0);
	}
	else if(a == b&&b == c)
	{
		printf("为等边三角形");
	}
	else if(a == b||a == c||b == c)
	{
		printf("为等腰三角形"); 
	}
	
	else
	{
		printf("为一般三角形"); 
	}
	
}


/*#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a < b)
	{
		printf("a < b");
	}
	else if(a == b)
	{
		printf("a == b");
	}
	else
	{
		printf("a > b");
	}
	return 0;
}



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n > 100||n < 0)
	{
		printf("输出错误");
		exit(0);
	}
	if(n >= 90&&n <= 100)
	{
		printf("优"); 
	}
	else if(n <= 89&&n >= 80)
	{
		printf("良"); 
	}
	else if(n <= 79&&n >= 70)
	{
		printf("中"); 
	 } 
	else if(n <= 69&&n >= 60)
	{
		printf("及格");
	}
	else
	{
		printf("不及格"); 
	}
	return 0;
}



/*#include<stdio.h>
int main()
{
	int n;
	int num;
	scanf("%d",&n);
	printf("2021年7月日历\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	num = (n + 4 - 1)%7;
	if(num == 0)
	{
		printf("%2d",n);
	}
	else if(num == 1)
	{
		printf("%6d",n);
	}
	else if(num == 2)
	{
		printf("%10d",n);
	}
	else if(num == 3)
	{
		printf("%14d",n);
	}
	else if(num == 4)
	{
		printf("%18d",n);
	}
	else if(num == 5)
	{
		printf("%22d",n);
	}
	else if(num == 6)
	{
		printf("%26d",n);
	}
	return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s;
	s = getchar();
	if(s < 32)
	{
		printf("为控制字符");
	}
	else if(s >= 'A'&&s <= 'Z'||s >= 'a'&&s <= 'z')
	{
		printf("为字母字符"); 
	}
	else if(s >= '0'&&s <= '9')
	{
		printf("为数字字符"); 
	 } 
	else
	{
	 	printf("为其他字符"); 
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n;
	int num;
	scanf("%d",&n);
	if(n%2 == 0)
	{
		num = n/2;
	}
	else
	{
		num = n*3 + 1;
	}
	printf("%d",num);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	if(a > b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b); 
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int tmp;
	if(a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num;
	if(n%2 != 0)
	{
		num = n*3 + 1;
		printf("%d",num);
	}
	else
	{
		printf("%d",n);
	}
	return 0;
 } 


/*#include<stdio.h>
#define N 7.86
#define PI 3.1415926
int main()
{
	double d1;
	double d2;
	double h,m;
	double v1,v2,v;
	scanf("%lf %lf %lf",&d1,&d2,&h);
	v1 = PI*(d1/2)*(d1/2)*h;
	v2 = PI*(d2/2)*(d2/2)*h;
	v = v1 - v2;
	m = v*N;
	printf("%.2lf",m);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s = 0;
	int p = 1;
	while(n!=0)
	{
		if((n%10)%2!=0)
		{
			s += (n%10)*p;
			p *= 10;
		}
		n /= 10;
	}
	printf("%d",s);
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a;
	int i = 0;
	int num = 0;
	int count = 0; 
	scanf("%d",&n);
	while(n/10 != 0)
	{
		a = n%10;
		
		if(a%2 == 1)
		{
			count++;
			while(i < count)
			{
				num += a*10^i;
				i++;
			}		
		}
		
		n /= 10;
	}
	printf("%d",num);
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
    } while(fabs(f3) >= 1e-6); // 用fabs(f3)直接检查f3的绝对值是否小于1e-6
    printf("%lf\n", c);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double f1,f2,f3;
	double x1 = -10,x2 = 10,x3;
	f1 = 2*x1*x1*x1 - 4*x1*x1 + 3*x1 - 6;
	f2 = 2*x2*x2*x2 - 4*x2*x2 + 3*x2 - 6;
	do
	{
		x3 = (x1 + x2)/2;
		f3 = 2*x3*x3*x3 - 4*x3*x3 + 3*x3 - 6;
		if(f1*f3 < 0)
		{
			f2 = f3;
			x2 = x3;
		}
		else
		{
			f1 = f3;
			x1 = x3;
		}
		
	}while(fabs(f3) >= 1e-6);
	printf("%lf",x3);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int max;
	int min;
	min = a/4 + (a%4)/2;
	max = a/2 + (a%2)/4;
	printf("%d %d",min,max);
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a;
	int s = 0;
	int p = 0;
	scanf("%d %d",&n,&a);
	int i;
	for(i = 0;i < n;i++)
	{
		p = p*10 + a;
		s += p;
	}
	printf("%d",s);
	return 0;
}


/*#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int j;
	int n;
	scanf("%d",&n);
	for(i = 2;i <= n;i++)
	{
		if(n%i == 0)
		{
			for(j = 2;j < i;j++)
			{
				if(i%j == 0)
				{
					break;
				}
				
			}
			if(i == j)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
	
}


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	while((c=getchar())!=EOF)
	{
		if(c>='a'&&c<='z')
			c=c-32;
		putchar(c);
	}
}
#include<stdio.h>
int main()
{
	char s;
	while((s = getchar())!=EOF)
	{
		if(s >= 'a'&&s <= 'z')
		{
			s = s - 32;
		}
		putchar(s);
	}
	return 0;
}


/*#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	char arr[N];
	gets(arr);
	int i;
	for(i = 0;i < strlen(arr);i++)
	{
		if(arr[i] > 'a'&&arr[i] < 'z')
		{
			arr[i] = arr[i] - 32;
		}
	}
	for(i = 0;i < strlen(arr);i++)
	{
		printf("%c",arr[i]);
	}
	
	return 0;
}


/*#include<stdio.h>
int main()
{
	float n;
	scanf("%f",&n);
	double bonus;
	if(n <= 10)
	{
		bonus = n*0.1;
	}
	else if(n < 20)
	{
		bonus = 10*0.1 + (n - 10)*0.075;
	}
	else if(n < 40)
	{
		bonus = 10*0.1 + 10*0.075 + (n - 20)*0.05;	
	}
	else if(n < 60)
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 + (n - 40)*0.03;
	}
	else if(n < 100)
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 + (n - 60)*0.015;
	}
	else
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 + 40*0.015 + (n - 100)*0.01;
	}
	printf("%.2lf",bonus);
	return 0;
}



/*#include<stdio.h>
#define N 10
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int avg;
	int count = 0;
	for(i = 0;i < N;i++)
	{
		avg += arr[i];
	}
	avg /= N;
	for(i = 0;i < N;i++)
	{
		if(arr[i] < avg)
		{
			count++;
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	printf("%d",count);
	return 0;
 } 



#include<stdio.h>
#define N 9//这句话也可以不要，但是它最大的用处就是假如以后更改为10*10的数组，就只需要改这里// 
int main()
{
	int i;
	int j;
	char arr[N][N];//该数组为字符数组，里面放字符而不放数字，所以用char类型// 
	for(i = 0;i < N;i++)//外层循环 ，循环行数//
	{
		for(j = 0;j < N;j++)//内层循环，循环列数// 
		{
			arr[i][j] = '*';//数组里面除了H，其他就是*了// 
			if(i == j)
			{
				arr[i][j] = 'H';//由图可知，对角线上均为H，对角线便是i == j// 
			}
			if(i == 4)
			{
				arr[4][j] = 'H';//当行数为4时，这一整行都是H// 
			}
			if(j == 4)
			{
				arr[i][4] = 'H';//当列数为4时，这一整列都是H//
			}
			if(i + j == 8)
			{
				arr[i][j] = 'H';//这个是另一条对角线，由规律可知i+j == 8// 
			}
			
		}	
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%c ",arr[i][j]);//由内外两层循环输出二维数组，输入二维数组亦然// 
		}
		printf("\n");//每一行输出完毕后换行，达到有九行的效果// 
	}	
	return 0;
}


#include<stdio.h>
int main()
{
	int year;
	int month;
	int day;
	scanf("%d %d %d",&year,&month,&day);
	int num;
	int num1;
	if(year%4 == 0&&year%100!=0 || year%400 == 0)
	{
		num1 = 29;
	}
	else
	{
		num1 = 28;
	}
	switch(month)
	{
		case 1:	num = day;break; 
		case 2: num = 31 + day;break;
		case 3: num = 31 + num1 + day;break;
		case 4: num = 62 + num1 + day;break;
		case 5: num = 92 + num1 + day;break;
		case 6: num = 123 + num1 + day;break;
		case 7: num = 153 + num1 + day;break;
		case 8: num = 184 + num1 + day;break;
		case 9: num = 214 + num1 + day;break;
		case 10: num = 245 + num1 + day;break;
		case 11: num = 275 + num1 + day;break;
		case 12: num = 305 + num1 + day;break;
	}
	printf("%d",num);
	return 0;
}


/*#include<stdio.h>
#define N 3
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	int tmp;
	for(i = 1;i < N;i++)
	{
		if(min > arr[i])
		{
			tmp = min;
			min = arr[i];
			arr[i] = tmp; 
		}
	}
	printf("%d",min);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int tmp;
	scanf("%d %d %d",&x,&y,&z);
	if(x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	if(x > z)
	{
		tmp = x;
		x = z;
		z = tmp;
	}
	if(y > z)
	{
		tmp = y;
		y = z;
		z = tmp;
	}
	printf("%d",x);
	return 0;
}

/*#include<stdio.h>
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	if(x < 1)
	{
		y = x;
	}
	else if(x >= 1&&x < 10)
	{
		y = 2*x - 11;
	}
	else
	{
		y = 3*x - 11;
	}
	printf("%d",y);
	return 0;
 } 



/*#include<stdio.h>
#define N 4
#define M 3
void add(int a[M][N],int b[M][N],int c[M][N])
{
	int i;
	int j;
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void transpose(int a[M][N],int t[N][M])
{
	int i;
	int j;
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N;j++)
		{
			t[j][i] = a[i][j];
		}
	}
}
void product(int a[M][N],int b[N][P],int r[M][P])
{
	int i;
	int j;
	int k = 0;
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < P;j++)
		{
			r[i][j] = 0;
		}
	}
	for(i = 0;i < M;i++)
	{
		for(k = 0;k < P;k++)
		{
			for(j = 0;j < N;j++)
			{
				r[j][k] += a[i][j] * b[j][k];
			}
		}
	}
}
int main()
{
	int i,j,x[M][N],y[M][N],z[M][N],s[N][M],t[M][M];
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	add(x,y,z);
	transpose(x,s);
	product(x,s,t);
	return 0;
}


/*#include<stdio.h>
#define N 2
#define M 2
void add(int arr[N][M],int brr[N][M])
{
	int i;
	int j;
	int crr[N][M];
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			crr[i][j] = arr[i][j] + brr[i][j];
		}
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%d ",crr[i][j]);
		}
		printf("\n");
	}
}
void mul(int arr[N][M],int brr[N][M])
{
	int i;
	int j;
	int crr[N][M];
	for(i = 0;i < N;i++)
	{
		for(i = 0;j < M;j++)
		{
			crr[i][j] = arr[i][j]*brr[i][j]; 
		}
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%d ",crr[i][j]);
		}
		printf("\n"); 
	}
}
void transpose(int arr[N][M])
{
	int i;
	int j;
	int drr[i][j];
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			drr[i][j] = arr[j][i];
		}
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%d",drr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i;
	int j;
	int arr[N][M] = {1,2,3,4};
	int brr[N][M] = {1,2,3,4};
	add(arr,brr);
	mul(arr,brr);
	transpose(arr);
	return 0;
}

/*#include<stdio.h>
#define N 3
#define M 4
void sort(int a[],int n)
{
	int i,j;
	for(i = 0;i < n - 1;i++)
	{
		for(j = 0;j < n - i -1;j++)
		{
			if(a[j] < a[j + 1])
			{
				int tmp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
void fun(int a[],int b[],int c[],int n,int m)
{
	int ia = 0;
	int ib = 0;
	int ic = 0;
	while(ia < n&&ib < m)
	{
		if(a[ia] < b[ib])
		{
			c[ic] = b[ib];
			ic++;
			ib++;
		}
		else
		{
			c[ic] = a[ia];
			ic++;
			ia++;
		}
	}
	while(ia < n)
	{
		c[ic] = a[ia];
		ic++;
		ia++;
	}
	while(ib < m)
	{
		c[ic] = b[ib];
		ic++;
		ib++;
	}
}
int main()
{
	int i;
	int arr[N] = {66,65,68};
	int brr[M] = {87,86,58,65};
	int crr[N + M];
	sort(arr,N);
	sort(brr,M); 
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i = 0;i < M;i++)
	{
		printf("%d ",brr[i]);
	}
	printf("\n");
	fun(arr,brr,crr,N,M);
	for(i = 0;i < N+M;i++)
	{
		printf("%d ",crr[i]);
	}
	return 0;
}


/*#include<stdio.h>
#define N 6
int main()
{
	int i;
	int m = (N - 1)/2;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i <= m;i++)
	{
		int tmp;
		tmp = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = tmp;
	}
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 

/*#include<stdio.h>
#include<Windows.h>
int main()
{
	system(" color 0c");//设计程序颜色 
	printf("遇见你是一件很开心的事情,爱你哟！！！\n");//打印文字 
	
	float x,y,a;//定义变量x,y,a 
	
	for(y=1.5f;y>-1;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=.05f){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<0.0f?'x':' ');
		}
		
		Sleep(150);//停顿函数（1.5秒钟） 
		putchar('\n'); //换行 
	}
	
	return 0;
}

/*#include<stdio.h>
#define N 10
int max;
int min;
double avg;
void input(int a[],int b[],int n)
{
	int i;
	max = min = a[0];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]);
		b[i] = i + 1;
		avg += a[i];
		if(max < a[i])
		{
			max = a[i];
		}
		if(min > a[i])
		{
			min = a[i];
		}
	}
	avg /= N;
}
void sort(int a[],int b[],int n)
{
	int i;
	int j;
	int tmp;
	for(i = 0;i < N - 1;i++)
	{
		for(j = 0;j < N - i - 1;j++)
		{
			if(a[j] < a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i;
	int a[N];
	int b[N];
	input(a,b,N);
	sort(a,b,N);
	printf("%d %d %.2lf",max,min,avg);
	for(i = 0;i < N;i++)
	{
		printf("%d %d",a[i],b[i]);
		printf("\n");
	}
	return 0;
	
}


/*#include <stdio.h>
int strcmp(char *s1, char *s2) 
{
    while (*s1 && *s2) 
	{
        if (*s1 != *s2)
		{
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    if (*s1) 
	{
        return *s1;
    } 
	else 
	{
        return -*s2;
    }
}


int main() 
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d", strcmp(s1, s2));
    return 0;
}


#include<stdio.h>
#define N 10
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	double avg;
	for(i = 0;i < N;i++)
	{
		avg += arr[i];
	}
	avg /= N;
	int max;
	int min;
	max = min = arr[0];
	for(i = 1;i < N;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	int a[N];
	int b[N];
	int j;
	for(i = 0;i < N - 1;i++)
	{
		for(j = 0;j < N - j - 1;j++)
		{
			if(a[j] < a[j + 1])
			{
				int tmp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp; 
			 } 
		}
	}
	printf("%.2lf %d %d",avg,max,min);
	for(i = 0;i < N;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i = 0;i < N;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
 } 


/*#include<stdio.h>//杨辉三角// 
int main()
{
    int a[10][10]= {0};
    int i,j;
    for(i=0; i<10; i++)
    {
        a[i][i]=1;
        a[i][0]=1;
        for(j=1; j<=i; j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<=i; j++)
            printf("%d ",a[i][j]);
        printf("\n\r");
    }

}
#include<stdio.h> //杨辉三角// 
#define N 100
void fun(int arr[N][N],int line)
{
	int i,j;
	for(i = 0;i < line;i++)
	{
		arr[i][i] = 1;
		arr[i][0] = 1;
		for(j = 1;j <= i;j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
		
	}
	for(i = 0;i < line;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int i;
	int line;
	scanf("%d",&line);
	int arr[N][N];
	fun(arr,line);
	return 0;
 } 


/*#include<stdio.h>
#define N 5
void fun(int a[N],int b[N])
{
	int i;
	int c[N];
	for(i = 0;i < N;i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i = 0;i < N;i++)
	{
		printf("%d ",c[i]);
	}
}
int main()
{
	int i;
	int a[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&b[i]);
	}
	fun(a,b);
	return 0;
}


/*#include<stdio.h>
#define N 5
int sum(int arr[N],int n)
{
	int i;
	int num = 0;
	for(i = 0;i < N;i++)
	{
		num += arr[i];
	}
	return num;
}
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",sum(arr,N));
	return 0;
 } 


/*#include<stdio.h>
#define N 5
void init(int arr[N],int n,int k)
{
	int i;
	for(i = 0;i < n;i++)
	{
		arr[i] = k;
	}
}
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	init(arr,N,1);
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


/*#include<stdio.h>
#define N 2
void fun(int arr[N])
{
	int tmp;
	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;	
}
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	fun(arr);
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

/*#include<stdio.h>
#define N 2
void fun(int x,int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf("%d %d",x,y);
}
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	fun(arr[0],arr[1]);
	return 0;
}


/*#include<stdio.h>
#define N 100
int main()
{
	int i;
	int n;
	int t;
	scanf("%d",&n);
	int arr[N];
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	t = arr[0];
	for(i = 0;i < n - 1;i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = t;
	for(i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


/*#include<stdio.h>
#define N 100
int main()
{
	int i;
	int n,t;
	scanf("%d",&n);
	int arr[N];
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	t = arr[0];
	
	for(i = 0;i < n - 1;i++)
	{
		arr[i] = arr[i + 1]; 
	}
	arr[n - 1] = t;
	for(i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}



/*冒泡排序法*/
/*#include<stdio.h>
#define N 8
int main()
{
	int i,j;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int tmp;
	for(j = 0;j < N - 1;j++)
	{
		for(i = 0;i < N - 1 - j;i++)
		{
			if(arr[i] > arr[i + 1]) /*前大后小
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;	
			}
		}
	}
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 



/*#include<stdio.h>
#define N 8
#define M 5
int main()
{
	int i;
	int a[N];
	int b[M];
	int c[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i < M;i++)
	{
		scanf("%d",&b[i]);
	}
	int j,k=0;
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			if(a[i]==b[j])
			{
				break; 
			}
		}
		if(j >= M)
		{
			c[k++] = a[i];
		}
	}
	for(i = 0;i < k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}


/*#include<stdio.h>
#define N 3
int main()
{
	int arr[N];
	int i;
	int max;
	int min;
	printf("输入N个整数：\n");
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = min = arr[0];
	for(i = 1;i < N;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d\n",max);
	printf("%d",min);
	return 0;
 } */


/*#include<stdio.h>
#define N 5
int main()
{
	int i;
	int max;
	int min; 
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < N;i++)
	{
		if(arr[i] > arr[max])
		{
			max = i;
		}
		if(arr[i] < arr[min])
		{
			min = i;
		}
	}
	printf("%d\n",arr[max]);
	printf("%d",arr[min]);
	
	return 0;
}

#include<stdio.h>
#define N 5
int main()
{
	int i;
	int arr[N];
	int max;
	int min;
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = min =arr[0];
	for(i = 1;i < N;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d\n",max);
	printf("%d",min);
	return 0;
}


/*#include<stdio.h>
#define N 5
int main()
{
	int i;
	int arr[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&arr[i]);
	}
	double avg;
	for(i = 0;i < N;i++)
	{
		avg += arr[i];
	}
	avg /= N;
	printf("%lf\n",avg);
	for(i = 0;i < N;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}




/*#include<stdio.h>
#define N 5
int main()
{
	int arr[N];
	int i;
	int j = 0;
	int n;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		if(n%i == 0)
		{
			arr[j++] = i;
		}
	 } 
	for(i = 0;i < j;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i = 1;i <= n;i++)
	{
		if(n%i == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}




/*一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double j = sqrt(i + 100);
	double k = sqrt(j + 168);
	while(j != (int)j && k != (int)k)
	{
		i++; 
	}
	printf("%d",i);
	return 0;
}


/*企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？
#include<stdio.h>
int main()
{
	double i;
	scanf("%lf",&i);
	double prize;
	double prize1 = 10*0.1;
	double prize2 = prize1 + 10*0.075;
	double prize4 = prize2 + 20*0.05;
	double prize6 = prize4 + 20*0.03;
	double prize10 = prize6 + 40*0.015;
	if(i<=10)
	{
		prize = i*0.1;
		printf("%lf",prize);
	}	
	else if(i>10&&i<=20)
	{
		prize = prize1 + (i - 10)*0.075;
		printf("%lf",prize);
	}
	else if(i > 20&&i <= 40)
	{
		prize = prize2 + (i - 20)*0.05;
		printf("%lf",prize);
	}
	else if(i > 40&&i <= 60)
	{
		prize = prize4 + (i - 40)*0.03;
		printf("%lf",prize);
	}
	else if(i >60&&i <= 100)
	{
		prize = prize6 + (i - 40)*0.015;
		printf("%lf",prize);
	}
	else
	{
		prize = prize10 + (i - 100)*0.01;
		printf("%lf",prize);
	}
	return 0;
}*/


/*有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？
都是多少？*/
/*#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++) 
	{ // 以下为三重循环
        for(j=1;j<5;j++) 
		{
            for (k=1;k<5;k++) 
			{ // 确保i、j、k三位互不相同
                if (i!=k&&i!=j&&j!=k) 
				{ 
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}


#include<stdio.h>
int main()
{
	int i;
	int j;
	int k;
	int num;
	for(i = 1;i <= 4;i++)
	{
		for(j = 1;j <= 4;j++)
		{
			for(k = 1;k <= 4;k++)
			{
				if(i!=j && i!=k && j!=k)
				{	
					num = i*100 + j*10 + k;
					printf("%d\n",num);
				}
			}
			
		}
	}
	return 0;
 } 

/*#include<stdio.h>
#define N 10000
int main()
{
	char str[N];
	char ch;
	int n = 0;
	int count = 0;
	char max = str[0];
	int i;
	while((ch = getchar())!=EOF)
	{
		str[n++] = ch;
	}
	
	for(i = 0;i < n;i++)
	{
		if(str[i] > max)
		{
			max = str[i];
		}
	}
	
	for(i = 0;i < n;i++)
	{
		if(str[i] == max)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}



/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    int count = 0;
    int max_count = 0;
	int i;
    while (scanf("%s", str) != EOF) 
	{
        int len = strlen(str);
        for (i = 0; i < len; i++) 
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
#include<string.h>
#define N 10000
int main()
{
	int i;
	char str[N];
	gets(str);
	char max = str[0];
	int count = 0;
	int num = strlen(str);
	for(i = 0;i < num;i++)
	{
		if(str[i] > max)
		{
			max = str[i];
		}
	}
	for(i = 0;i < num;i++)
	{
		if(str[i] == max)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}



/*#include<stdio.h>
#define N 3
#define M 4
int main()
{
	int arr[N][M];
	int *p;
	int i,j;
	p = *arr;
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			scanf("%d",p++);
		}
	}
	p = *arr;
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%d ",*p++);
		}
		printf("\n");
	}
	
}

/*#include<stdio.h>
#define N 3
#define M 4
int main()
{
	double arr[N][M] = {{44,55,66,77},{77,88,44,99},{88,99,66,77}};
	double *p;
	int i,k;
	p = *arr;
	scanf("%d",&k);
	for(i = 0;i < M;i++)
	{
		printf("%.2lf ",*(*(arr + k)+i));
	}	
} 


/*#include<stdio.h>
#define N 10
int main()
{
	int i;
	
	
	int arr[N];
	int *p = arr;
	for(i = 0;i < N;i++)
	{
		scanf("%d",p + i);
	}
	
	for(i = 0;i < N;i++)
	{
		printf("%d ",*(arr + i));
	}
	return 0;
		
} 

/*-3d说明向左靠齐，比如
1**（*表示空格）
3d说明向右对齐，比如
**1（*表示空格）
#include <stdio.h>

int strcmp(char *s1, char *s2) 
{
    while (*s1 && *s2) 
	{
        if (*s1 != *s2)
		{
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    if (*s1) 
	{
        return *s1;
    } 
	else 
	{
        return -*s2;
    }
}

int main() 
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d", strcmp(s1, s2));
    return 0;
}
 


/*#include <stdio.h>

void transpose(int matrix[3][3]) 
{
    int temp;
    int i,j;
    for (i = 0; i < 3; i++) 
	{
        for (j = i + 1; j < 3; j++) 
		{
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() 
{
	int i,j;
    int matrix[3][3];
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(matrix);

    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*#include <stdio.h>
#include <string.h>

int string_length(char *str) 
{
    return strlen(str);
}

int main() 
{
    char input[100];
    printf("请输入一串字符串：");
    scanf("%s", input);
    int length = string_length(input);
    printf("字符串的长度为：%d", length);
    return 0;
}


/*#include<stdio.h>
int main()
{
	int i; 
	int arr[10];
	for(i = 0;i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < 10;i++
	{
		peinrf("%d",arr[i]);
	}
	return 0;
}


#include<stdio.h>
#define N 100
int fun(char *str)
{
	char *p,*q;
	p = str;
	q = str;
	while(*q)
	{
		q++;
	}
	q = q - 1;
	while(p < q)
	{
		if(*p != *q)
		{
			return 0;
		}
		else
		{
			p++;
			q--;
		}
	}
	return 1;
}
int main()
{
	char str[N];
	gets(str);
	fun(str);
	if(fun(str))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}



/*#include<stdio.h>
#include<string.h>
#define N 100
int process(char str1[N],char str2[N]) 
{
	int i;
	int num1,num2;
	num1 = strlen(str1);
	num2 = strlen(str2);
	if(num1 < num2)
	{
		printf("-%d",str2[num2 - 1]);
	}
	if(num1 > num2)
	{
		printf("%d",str1[num1 - 1]);
	}
	if(num1 == num2)
	{
		while(i < num1)
		{
			if(str1[i] == str2[i])
			{
				i++;
			}
		}
		printf("0");
	}
}
int main()
{
	char str1[N];
	char str2[N];
	scanf("%s",&str1);
	scanf("%s",&str2);
	process(str1,str2);
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int mul = 1;
	for(i = 1;i <= n;i++)
	{
		if(i%2 == 0)
		{
			mul *= i;
		}
	}
	printf("%d",mul);
	return 0;
	
}


#include<stdio.h>
void process(int arr[3][3],int t[3][3])
{
	int i,j;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			t[j][i] = arr[i][j];
		}
	}
}

int main()
{
	int t[3][3];
	int i,j;
	int arr[3][3];
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	process(arr,t);
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*#include <stdio.h>



int length_string(char *s);



void main () {

	char s1[50];

	gets(s1);

	printf("输入的字符串为：%s",s1);

	int length;

	length = length_string(s1);

	printf("\n字符串长度为：%d\n",length);

}



int length_string(char *s) {

	int i = 0;

	while(*s != '\0') {

		s++;

		i++;

	}

	return i;

}

#include<stdio.h>
#define N 100
void process(char *arr)
{
	/*int count = 0;
	while(*arr!='\0')
	{
		arr++;
		count++;	
	}
	
	int i;
	char c;
	int count = 0;
	for(i = 0;(c = arr[i])!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
int main()
{
	
	char arr[N];
	gets(arr);
	process(arr);
	return 0;
}


/*#include <stdio.h>

void input(int *arr, int n) 
{
	int i;
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void process(int *arr, int n) 
{
	int i;
    int minIndex = 0, maxIndex = n - 1;
    for (i = 1; i < n; i++) 
	{
        if (arr[i] < arr[minIndex]) 
		{
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) 
		{
            maxIndex = i;
        }
    }
    int temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;
    temp = arr[n - 1];
    arr[n - 1] = arr[maxIndex];
    arr[maxIndex] = temp;
}

void output(int *arr, int n) 
{
	int i;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("");
}

int main()
{
    int arr[10];
    input(arr, 10);
    process(arr, 10);
    output(arr, 10);
    return 0;
}



#include<stdio.h>
void sort(int *arr,int n)
{
	int tmp;
    int i,j;
    int min = 0;
	int max = n - 1;
	for(i = 0;i < n;i++)
	{
		min = 0;
		for(j = 1;j < n - 1;j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
	}
	if(min!=0)
	{
		tmp = arr[0];
		arr[0] = arr[min];
		arr[min] = tmp;
	}
	for(i = 0;i < n;i++)
	{
		for( j = 1;j < n - 1;j++)
		{
			if(arr[j] > arr[max])
			{
				max = j;
			}
		}
	}
	if(max!=n - 1)
	{
		tmp = arr[max];
		arr[max] = arr[n -1];
		arr[n - 1] = tmp;
	}
	
    /*for(i = 1;i < n - 1;i++)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
        if(arr[i] > arr[max])
        {
            max = i;
        }
    }
        tmp = arr[min];
        arr[min] = arr[0];
        arr[0] = tmp;
        tmp = arr[max];
        arr[max] = arr[n - 1];
        arr[n - 1] = tmp; */


/*int main()
{
    int i;
    int arr[10];
    for(i = 0;i < 10;i++)
    {
    	scanf("%d",&arr[i]);
	}
    sort(arr,10);
    
    for(i = 0;i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}


/*#include<stdio.h>
int main()
{
	printf("你好"); 
	return 0;
} */
 
