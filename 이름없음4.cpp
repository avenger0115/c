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
//		printf("�ȳ�");	
//	}
//	else{
//		printf("�߰�");
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
//		printf ("%d��%d���� ũ��\n",a,b);
//	}
//	else
//	{
//		printf("%d�� %d���� ũ�� �ʴ�\n",a,b);
//	}
// } 
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("10000 �̸� ���� �Է� :");
//	scanf("%d",&num);
//	
//	if(num < 10) 
//	{
//		printf("�� �ڸ� ��\n");
//	}
//	else if(num < 100)
//	{
//		printf("�� �ڸ� ��\n");
//	}
//	else if(num < 1000)
//	{
//		printf("�� �ڸ� ��\n");
//	}
//	else if(num < 10000)
//	{
//		printf("�� �ڸ� ��\n");
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


