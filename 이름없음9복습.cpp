//#include<cstdio>
//int main()
//{
//	for(int i = 1;i<7;i++)
//	{
//		printf("%d�г� ",i);
//		for(int j = 1;j<11;j++)
//		{
//			printf("%d�� ",j);
//		}
//		printf("\n");
//	}
//}
//#include<cstdio>
//int main()
//{
//	int i = 6;
//	while(i>=1)
//	{
//		printf("%d�г�",i);
//		int j = 1;
//		while(j<=10)
//		{
//			printf("%d��"j);
//			j++;
//		}
//		printf("\n");
//		i--;
//	}
//}
//#include<cstdio>
//int main()
//{
//	int i = 1;
//	while(i<=6)
//	{
//		printf("%d�г� ",i);
//		for(int j = 10;j>=1;j--)
//		{
//			printf("%d�� ",j);
//		}
//		printf("\n");
//		i++;
//	}
//} 
//#include<cstdio>
//int main()
//{
//	for(int i = 1;i<=5;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//} 
//#include<cstdio>
//int main()
//{
//	for(int i = 5;i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}
//#include<cstdio>
//int main()
//{
//	for(int i = 5;i>=1;i--)
//	{
//		for(int j =i;j<=5;j++)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}
//#include<cstdio>
//int main()
//{
//	for(int i = 5;i>=1;i--)
//	{
//		for(int j = i;j>=1;j--)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}
//#include<cstdio>
//int main()
//{
//	for(int i = 1;i<=100;i++)
//	{
//		printf("%d :",i);
//		for(int j = 1;j<=i;j++)
//		{
//			if(i%j==0)
//			{
//				printf("%d ",j);
//			}
//		}
//		printf("\n");
//	}
//	
//}	
#include<cstdio>
int main()
{
	for(int i = 1;i<=5;i++)
	{
		for(int j = 4;j>=i;j--)
		{
			printf("  ");
		}
		for(int j = i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


