//#include <stdio.h>
//int main()
//{
//   int a;
//   int f1;
//   int ch;
//   
//   scanf("%d %d %d",&a,&f1,&ch ) ;
//   printf("%d³â%d¿ù%dÀÏ\n",a,f1,ch ) ;
//   
//   
//	
//}
//#include <stdio.h>
//int main()
//{
//	int a,b ;
//	scanf("%d %d",&a,&b);
//    printf("%d + %d = %d\n",a,b,a+b);
//    printf("%d - %d = %d\n",a,b,a-b);
//    printf("%d * %d = %d\n",a,b,a*b);
//    printf("%d / %d = %d\n",a,b,a/b);
//	printf("%d %% %d = %d\n",a,b,a%b);
//
//	return 0 ;
//	
//}
//#include <stdio.h>
//int main()
//{
//	float a,b ;
//	scanf("%f %f",&a,&b);
//    printf("%f + %f = %f\n",a,b,a+b);
//    printf("%f - %f = %f\n",a,b,a-b);
//    printf("%f * %f = %f\n",a,b,a*b);
//    printf("%f / %f = %f\n",a,b,a/b);
//	
//	return 0 ;
//	
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",10/3);
//	printf("%d\n",10/3.0);
//	printf("%f\n",10/3.0);	
//	
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d\n",a%10+a/10);
//
//}
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a/100+a/10%10+a%10);
    printf("%d\n",(a/100)*(a/10%10)*(a%10));
}










