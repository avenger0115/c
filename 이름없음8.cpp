//#include<stdio.h>
//int main()
//{
//	int n;
//    scanf("%d",&n);
//    n = n/10;
//	switch(n)
//	{
//		case 0:
//			printf("유소년");
//			break;
//		case 1: 
//			printf("청소년");
//			break;
//		case 2:
//			printf("청년");
//			break;
//		case 3:
//			printf("청년"); 
//			break;
//		case 4:
//			printf("중년");
//			break;
//		case 5:
//			printf("중년"); 
//			break;
//	}
//	return 0; 
//}
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	scanf("%d",&n); 
//	if(n<1)
//	{
//		printf("유소년");
//	}
//	else if(n<2)
//	{
//		printf("청소년");
//	}
//	else if(n<3)
//	{
//		printf("청년");
//	}
//	else if(n<4)
//	{
//		printf("중년");
//	} 
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	switch(n)
//	{
//		case 1:
//			printf("홀수");
//			break;
//		case 2:
//		    printf("짝수");
//			break;
//		case 3:
//		    printf("홀수"); 
//		    break;
//		case 4:
//		    printf("짝수");
//		    break;
//		default:
//			printf("자연수");
//			break;	
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d;
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	int sum,n;
//	sum=a+b+c+d
//	n=sum/4
//	switch(n/10)
//	{
//		case 10:
//			printf("참 잘했어요.");
//			break;
//		case 9:
//			printf("참 잘했어요.");
//			break;
//		case 8:
//			printf("잘했어요.");
//			break;
//		case 7:
//			printf("화이팅.");
//			break;	
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	for(int i = 1;i<11;i++)
//	{
//		if(i%2==0)
//		{
//			a=a+i;
//		}
//		else if(i%2==1)
//		{
//			b=b+i;
//		}
//	}
//	printf("%d %d",a,b);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	for(int i = 1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
		}
	}
}







