//#include<cstdio>
//int main()
//{
//	double height[4];
//	int j = 2;
//	
//	height[0] = 145.7;
//	height[1] = 156.3;
//	height[j] = 147.89;
//	j++;
//	height[j] = 159.4;
//	printf("%lf",height[0]); 
//	return 0;
//}
//#include<cstdio>
//int main()
//{
//	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
//	int br[10];
//	
//	for(int i = 0;i<=9;i++)
//	{
//		if(i%2==1)
//		{
//			printf("%d ",ar[i]);	
//		}
//	}
//}
//#include<cstdio>
//int main()
//{
//	int ar[10] = {5,2,1,5,6,7,8,9,4,2};
//	int min = 1000;
//	int index;
//	
//	for(int i = 0;i<=9;i++)
//	{
//		if(ar[i]<min)
//		{
//			min = ar[i];
//			index = i;
//		}
//	}
//}
//#include<cstdio>
//int main()
//{
//	int ar[101];
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i<n;i++)
//	{
//		scanf("%d",&ar[i]);
//	}
//	int v;
//	scanf("%d",&v);
//	int count=0;
//	
//	for(int i = 0;i<n;i++)
//	{
//		if(ar[i]==v)
//		{
//			count++i;
//		}
//	}
//	printf("%d",count);
//}
//#include<cstdio>
//int main()
//{
//	int ar[10];
//	int n;
//	scanf("%d",&n);
//	
//	int x;
//	scanf("%d",&x);
//	for(int i = 0;i<n;i++)
//	{
//		scanf("%d",&ar[i]);
//	}
//	for(int i = 0;i<n;i++)
//	{
//		if(ar[i]<x)
//		{
//			printf("%d ",ar[i]);
//		}
//	}
//}
//#include<cstdio>
//int main()
//{
//	int ar[101];
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i<n;i++)
//	{
//		scanf("%d",ar[i]);
//	}
//}
//#include<cstdio>
//int main()
//{
//	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
//	int br[10];
//	
//	for(int i = 0;i<=9;i++)
//	{
//		if(i%2==1)
//		{
//			printf("%d ",ar[i]);
//		}
//	}
//}
#include<cstdio>
int main()
{
	int ar[10] = {5,2,1,5,6,7,8,9,4,2};
	int min = 1000;
	int index;
	
	for(int i = 0;i<=9;i++)
	{
		if(ar[i]<min)
		{
			min = ar[i];
		}
	}
}




