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
 
