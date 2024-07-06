//#include <stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("%d\n",a+b);
//	
//}
//#include <stdio.h>
//int main()
//{
//	printf("\"천재는 1%%의영감과99%%의노력으로 이루어진다.\"\n");
//	return 0 ; 
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
//	return 0 ;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b,c,d;
//	scanf("%d,&a");
//	
//	b = a/100;
//	c = a%100/10;
//	a = a%10;
//	printf("%d + %d + %d = %d",b,c,d,b+c+a);
//
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",(10>5) && (8<3));
//	printf("%d\n",(10>5) || (8<3));
//	printf("%d\n",!(10>5));
//}
#include <stdio.h>
int main()
{
   int res;
	
   res=0&&0;
   printf("%d\n",res);
   res=0&&1;
   printf("%d\n",res);
   res=1&&0;
   printf("%d\n",res);
   res=1&&1;
   printf("%d\n",res);
   
   res=0||0;
   printf("%d\n",res);
   res=0||1;
   printf("%d\n",res);
   res=1||0;
   printf("%d\n",res);
   res=1||1;
   printf("%d\n",res);
   
   printf("%d\n", !res);
}


