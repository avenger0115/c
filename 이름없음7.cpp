//#include<stdio.h>
//int main()
//{
//	int i;
//	i = 11;
//	do
//	{
//		printf("%d ",i);
//		i++;
//	} while(i <= 10);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	i = 1;
//	for(int i = 1;i <= 10; i++)
//	{
//		printf("%d ",i);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n,sum;
//	n = 10;
//	sum = 0;
//    while(n <= 17)
//	{
//		printf("%d ",n,sum);
//		n++;
//		sum=sum+n;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i =0;
//	while(i<10)
//	{
//		if(i==5)
//		{
//			i++;
//			continue;
//		}
//		printf("i의 값 : %d\n",i);
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	int j=1;
//	while(j<m)
//	{
//		int i = 1;
//		while(i<=n)
//		{
//			printf("%d ",i);
//		    i++;
//    	}
//		printf("\n");
//		j++;	
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n,count=0;
//	scanf("%d",&n);
//	int a = n;
//	while(n>0)
//	{
//		count++;
//		n/=10;
//	}
//	printf("%d는 %d자리 수 입니다.",a,count);
//	
//}
#include<stdio.h>
int main()
{
	int n,sum,count=0;
	sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d ",n%10);
		sum=sum+n%10;
		n/=10;
	}
	printf("%d",sum);
}









