//#include<cstdio>
//int main()
//{
//	int n;
//	n = 2;
//	switch(3)
//	{
//	case 0:
//		printf("���Դϴ�.");
//	case 1: 
//		printf("���Դϴ�.");
//	case 2:
//		printf("���Դϴ�.");
//	case 3:
//		printf("���Դϴ�."); 
//	}
//	return 0; 
//}
//#include<cstdio>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	n=n/10;
//	switch(n)
//	{
//	case 0:
//		printf("���ҳ�.");
//		break;
//	case 1:
//		printf("û�ҳ�.");
//		break;
//	case 2:
//		printf("û��.");
//		break;
//	case 3:
//		printf("û��.");
//		break;
//	case 4:
//		printf("�߳�.");
//	case 5:
//		printf("�߳�.");
//	}
//	return 0; 
//}
//#include<cstdio>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if(n<1)
//	{
//		printf("���ҳ�.");
//	}
//	else if(n<2)
//	{
//		printf("û�ҳ�.");
//	}
//	else if(n<3)
//	{
//		printf("û��.");
//	}
//	else if(n<4)
//	{
//		printf("�߳�.");
//	} 
//}
//#include<cstdio>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	switch(n)
//	{
//	case 1:
//		printf("Ȧ��.");
//		break;
//	case 2:
//		printf("¦��.");
//		break;
//	case 3:
//		printf("Ȧ��.");
//		break;
//	case 4:
//		printf("¦��.");
//		break;
//	default:
//		printf("�ڿ���.");
//		break;
//	}
//	return 0;
//}
#include<cstdio>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int sum,n;
	sum=a+b+c+d;
	n=sum/4;
	switch(n/10)
	{
	case 10:
		printf("�� ���߾��.");
		break;
	case 9:
		printf("�� ���߾��.");
		break;
	case 8:
		printf("���߾��.");
		break;
	case 7:
		printf("ȭ����.");
		break; 
	}
	return 0;
}




