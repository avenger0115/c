//#include<stdio.h>
//int main()
//{
//	int n;
//    scanf("%d",&n);
//    n = n/10;
//	switch(n)
//	{
//		case 0:
//			printf("���ҳ�");
//			break;
//		case 1: 
//			printf("û�ҳ�");
//			break;
//		case 2:
//			printf("û��");
//			break;
//		case 3:
//			printf("û��"); 
//			break;
//		case 4:
//			printf("�߳�");
//			break;
//		case 5:
//			printf("�߳�"); 
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
//		printf("���ҳ�");
//	}
//	else if(n<2)
//	{
//		printf("û�ҳ�");
//	}
//	else if(n<3)
//	{
//		printf("û��");
//	}
//	else if(n<4)
//	{
//		printf("�߳�");
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
//			printf("Ȧ��");
//			break;
//		case 2:
//		    printf("¦��");
//			break;
//		case 3:
//		    printf("Ȧ��"); 
//		    break;
//		case 4:
//		    printf("¦��");
//		    break;
//		default:
//			printf("�ڿ���");
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
//			printf("�� ���߾��.");
//			break;
//		case 9:
//			printf("�� ���߾��.");
//			break;
//		case 8:
//			printf("���߾��.");
//			break;
//		case 7:
//			printf("ȭ����.");
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







