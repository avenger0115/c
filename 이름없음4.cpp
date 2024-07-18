//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int result = i++ + --j;
//	
//	printf("%d\n",i);
//	printf("%d\n",j);
//	printf("%d",result);
//	
//}
//#include<stdio.h>
//int main()
//{
//	int a=5;
//	int b=10;
//	
//	if(a<b){
//		printf("안녕");	
//	}
//	else{
//		printf("잘가");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	a = 12;
//	b = 56;
//	
//	if(a>b)
//	{
//		printf ("%d는%d보다 크다\n",a,b);
//	}
//	else
//	{
//		printf("%d는 %d보다 크지 않다\n",a,b);
//	}
// } 
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("10000 미만 정수 입력 :");
//	scanf("%d",&num);
//	
//	if(num < 10) 
//	{
//		printf("한 자리 수\n");
//	}
//	else if(num < 100)
//	{
//		printf("두 자리 수\n");
//	}
//	else if(num < 1000)
//	{
//		printf("세 자리 수\n");
//	}
//	else if(num < 10000)
//	{
//		printf("네 자리 수\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	
//	int a;
//	scanf("%d",&a);
//	
//	if(a<0)
//	{
//		printf("minus");
//	}
//	else if(a>0)
//	{
//		printf("plus");
//	}
//	else if(a==0)
//	{
//		printf("zero");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	
//	if(a%2==0)
//	{
//		printf("Even");
//	}
//	else if(a%2==1)
//	{
//		printf("odd number");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	
//	if(a%3==0)
//	{
//		printf("Multiple of 3");
//	}
//	else 
//	{
//		printf("not a multiple of 3");
//	}
//}
#include<stdio.h>
int main()
{
	int a ,b;
	scanf("%d %d",a,b);
	
	if(a>b)
	{
		printf("%d",a);	
	}
	else{
		printf("%d",b);
	}
}


