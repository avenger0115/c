//#include<cstdio>
//int main()
//{
//	int a = 70;
//	if(a <= 35)
//	{
//		printf("ÁÁÀ½");
//	}
//	else if(15<a&&a<=35)
//	{
//		printf("º¸Åë");
//	}
//	else if(35<a&&a<=75)
//	{
//		printf("³ª»Ý");
//	}
//	else
//	{
//		printf("¸Å¿ì³ª»Ý");
//	}
//}
//#include<cstdio>
//int main()
//{
//	int a = 12;
//	int b = 3;
//	
//	a-= b++;
//	printf("a = %d b = %d\n",a,b);
//	a/= --b;
//	printf("a = %d b = %d\n",a,b);
//	a+= b++;
//	printf("a = %d b = %d\n",a,b);
//	a-= ++b;
//	printf("a = %d b = %d\n",a,b);
//	a+= --b;
//	printf("a = %d b = %d\n",a,b);
//} 
//#include<cstdio>
//int main()
//{
//	int n,a,b;
//	scanf("%d",&n);	
//	scanf("%d %d",&a,&b);
//	if(n%a==0&&n%b==0)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0";)
//	}
//}
//#include<cstdio>
//int main()
//{
//	int sum=0;
//	for(int i=1;i<=100000;i++)
//	{
//		if("i%3==0")
//		{
//			printf("%d",i*-1);
//			sum+=i*-1
//		}
//		else
//		{
//			printf("%d",i);
//			sum+=1;
//		}
//	}
//	printf("\n%d,sum");
////}
#include<stdio.h>
int main()
{
	int sum=0,min=100000,input=0;
	for(int i=0;i<4;i++)
	{
		scanf("%d",&input);
		if(input%2==1)
		{
			sum+=input;
			if(input<min)
			{
				min = input;
			}
		}
		
	}
	if(sum==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n",sum);
		printf("%d\n",min);
	}
}
