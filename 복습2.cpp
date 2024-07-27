#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a%2==0&&b%2==0)
	{
		printf("%d",a*b);
	}
	else if(a%3==1&&b%3==1)
	{
		printf("%d",a+b);
	}
	else
	{
		printf("%d",a-b);
	}
}
//#include<stdio.h>
//int main()
//{
//	int n;
//	
//	for(n = -10; n <= -1; n++)
//	{
//		printf("%d",n);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	
//	for(n=1;n<=100;n=n+1)
//	{
//		printf("%d",n);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n)
//}






