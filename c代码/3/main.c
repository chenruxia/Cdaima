#include<stdio.h>
#define N 10
void shuru(int *p)
{
    int i;
    for(i = 0;i < N;i++)
    {
        scanf("%d",p + i);
    }
}
void chuli(int arr[N],int *p)
{
    int i,j;
    int min;

    for(i = 0;i < N - 1;i++)
    {
        min = 0;
        for(j = i + 1;j < N;j++)
        {
            if(*(p + j) < *(p + min))
            {
                min = j;
            }
        }
    }
    if(min != 0)
    {
        int tmp = *(p + min);
        *(p + min) = *p;
        *p = tmp;
    }

}
void da(int arr[N],int *p)
{
    int i,j;
    int max;
    for(i = 0;i < N - 1;i++)
    {
        max = 9;
        for(j = i + 1;j < N;j++)
        {
            if(*(p + j) > *(p + max))
            {
                max = j;
            }
        }
    }
    if(max != 9)
    {
        int tmp = *(p + max);
        *(p + max) = *(p + 9);
        *(p + 9) = tmp;
    }


}
int main()
{
    int i;
    int *p;
    int arr[N];
    p = arr;
    shuru(*p);
    chuli(arr[N],*p);
    da(arr[N],*p);
    for(i = 0;i < N; i++)
    {
        printf("%d ",*(p + 1));
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int a,b,c;
    int *pa,*pb,*pc;
    pa = &a;
    pb = &b;
    pc = &c;
    scanf("%d %d %d",&a,&b,&c);
    if(*pa > *pb)
    {
        int tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
    if(*pb > *pc)
    {
        int tmp = *pc;
        *pc = *pb;
        *pb = tmp;
    }
    if(*pa > *pc)
    {
        int tmp = *pc;
        *pc = *pa;
        *pa = tmp;
    }
    printf("%d %d %d",*pa,*pb,*pc);
    return 0;
}


/*#include<stdio.h>
double fun(int n,int x)
{

    if(n == 0)
    {

        return 1;
    }
    else if(n == 1)
    {

        return x;
    }

    else
    {

        return ((2*n - 1)*x*fun(n - 1,x) - (n - 1)*fun(n - 2,x))/n;
    }

}
int main()
{
    int n;
    int x;
    scanf("%d %d",&n,&x);
    printf("%lf",fun(n,x));
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
}

/*#include<stdio.h>

double fun(int n,int x)
{
    int result;
    if(n == 0)
    {
        result = 0;
        return result;
    }
    else if(n == 1)
    {
        result = x;
        return result;
    }

    else if(n >= 2)
    {
        result = ((2*n - 1)*fun(n - 1,x) - (n - 1)*fun(n - 2,x))/n;
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

/*#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum = 0;
    int n;
    while(num%10 != 0)
    {
        n = num%10;
        num = num/10;
        sum += n;
    }
    printf("%d",sum);
    return 0;

}


/*#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    char message[] = "chenruxiashabi "; // 弹幕消息
    int length = strlen(message);
    int screenHeight = 25; // 控制台高度
    int screenWidth = 80; // 控制台宽度
    int speed = 100; // 滚动速度，单位为毫秒

    for (int i = 0; i < length + screenWidth; i++) {
        system("cls"); // 清空控制台
        for (int k = 0; k < screenHeight; k++) {
            gotoxy(screenWidth - i, k); // 控制弹幕开始位置
            for (int j = 0; j < length; j++) {
                if (i + j < screenWidth && i + j >= 0) {
                    printf("%c", message[j]);
                }
            }
        }
        Sleep(speed); // 控制滚动速度
    }

    return 0;
}


/*#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void gotoxy(int x, int y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
    char message[] = "This is a custom danmaku message!";
    int x = 0;
    int y = 5;
    int speed = 100; // 弹幕速度，单位为毫秒
    while (!kbhit())
    {
        system("cls"); // 清空控制台
        gotoxy(x, y);
        printf("%s", message);
        Sleep(speed); // 控制弹幕速度
        x++;
        if (x >= 80)
        { // 控制弹幕移动到末尾后重新开始
            x = 0;
        }
    }

    return 0;
}

/*#include <stdio.h>
#include<stdlib.h>
#define M 81
int main( )
{	char str[M];
    int c[M];
    int i,count = 0;
    char ch = 0;
    gets(str);
	for( i = 0; i < strlen(str); i++ )
      if( ch < str[i] )
           ch = str[i];
	for( i = 0; i < strlen(str); i++ )
      if( ch == str[i] )
           c[count++]=i;
for(i=0;i<count;i++)
   printf(" %d ",c[i]);
	printf( " \nmax = %c ,count =  %d\n",ch,count );

return 0;
 }



/*#include <stdio.h>
#include <string.h>

int main() {
    char str[10001];
    int count = 0;
    int max_count = 0;

    while (scanf("%s", str) != EOF) {
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                count++;
            } else {
                if (count > max_count) {
                    max_count = count;
                }
                count = 0;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
        count = 0;
    }

    printf("%d", max_count);
    return 0;
}



/*#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    int i = 0;
    int k;
    char arr[N];
    gets(arr);
    while(arr[i]!='*')
    {

    }

    for(i = 0;arr[k]!=0;i++,k++)
    {
        if(arr[i] == '*')
        {
            arr[k] = arr[i];
        }

    }
    arr[k] = '\0';
    printf("%s",arr);
    return 0;
}



/*#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    char arr[N];
    scanf("%s",&arr);
    int i,j;
    int k = strlen(arr);
    for(i = 0;i < k;i++)
    {
        if(arr[i]!='*')
        {
            arr[j++] = arr[i];
        }
    }

    printf("%s",arr);
    return 0;
}


/*#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    int i;
    char arr[N];
    gets(arr);
    char n;
    scanf(" %c",&n);
    int count = 0;
    int k = strlen(arr);
    for(i = 0;i < k;i++)
    {
        if(n == arr[i])
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;

}


/*#include<stdio.h>
int main()
{
    int nrows;
    int ncols;
    int col;
    int i,j;
    double avg;
    double sum = 0;
    int max = 0;
    int s;
    scanf("%d %d %d",&nrows,&ncols,&col);
    int arr[nrows][ncols];
    for(i = 0;i < nrows;i++)
    {
        for(j = 0;j < ncols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0;i < nrows;i++)
    {
        sum += arr[i][col - 1];
    }
    avg = sum/nrows;

    for(i = 0;i < nrows;i++)
    {
        s = 0;
        for(j = 0;j < ncols;j++)
        {
            s += arr[i][j];

        }
        if(max < s)
        {
            max = s;
        }
    }

    printf("%.6lf %d",avg,max);


    return 0;
}


/*#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int max;
    int min;
    int tmp;

    for(i = 0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < 5;i++)
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
    tmp = arr[min];
    arr[min] = arr[max];
    arr[max] = tmp;
    for(i = 0;i < 5;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}



/*#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t;
    int f = -1;
    int i = 1;
    int j = n;
    int arr[n][n];

	for(t = 1;t <= n*n;t++)
	{
	  arr[i][j]=t;
	  i = i + f;
	  j = j + f;
	  if(i<1||i>n||j<1||j>n)
	    f=-f;
	  if(j < 1)
	  {

        i=i+2;
	  	j=1;
	  }
	  else if(i<1)
	    i=1;
	  else if(i>n)
	  {
	  	i=n;
	  	j=j-2;
	  }
	  else if(j>n)
	    j=n;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
	}

	return 0;
}





/*#include <stdio.h>

int main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);
    int matrix[n][n];

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= n; j++)
            {
                matrix[k][j - 1] = i * n + j - 1;
            }
            k++;
        }
        else
        {
            for (j = n; j >= 1; j--)
            {
                matrix[k][j - 1] = i * n + j - 1;
            }
            k++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = n + i - j;
            int l = 1;
            while (k > n * 2 - 1)
            {
                k -= n;
                l++;
            }
            if (k % 2 == 0)
            {
                if (l == 1)
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                }
                else
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                }
            }
            else
            {
                if (l == n)
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                } else
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                }
            }
        }
    }

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



/*#include <stdio.h>

int main()
{
    int n = 5;
    int matrix[5][5];
    int count = 1;
    int row_start = 0, row_end = n - 1;
    int col_start = 0, col_end = n - 1;

    while (count <= n * n) {
        for (int i = col_start; i <= col_end; i++) {
            matrix[row_start][i] = count++;
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++) {
            matrix[i][col_end] = count++;
        }
        col_end--;

        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--) {
                matrix[row_end][i] = count++;
            }
            row_end--;
        }

        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                matrix[i][col_start] = count++;
            }
            col_start++;
        }
    }

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




/*#include <stdio.h>

int main()
{
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
}*/


