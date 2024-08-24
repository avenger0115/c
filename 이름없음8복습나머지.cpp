#include<stdio.h>
int mian()
{
	int a,b;
	for(int i=1;i<11;i++)
	{
		if(i%2==0)
		{
			a=a+i;
		}
		else if(i%2==1)
		{
			b=b+i;
		}
	}
	printf("%d %d",a,b);
	return 0;
//}
//#include<cstdio>
//int main()
//{
//	int n,a,b;
//	scanf("%d %d %d",&n,&a,&b");
//	for(int i =1;i<n;i++)
//	{
//		if(n%i==0)
//		{
//			printf("%d",i);
//		}
//	}
//}

