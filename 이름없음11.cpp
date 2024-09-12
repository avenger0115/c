//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
// 
//	ch1 = 'A';
//	ch2 = 'a';
//	printf("%c %c\n",ch1,ch2);
//	printf("%d %d\n",ch1,ch2);
//	
//	printf("%c %c\n",66,68);
//	printf("%d %d\n",66,68);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
//	ch1 = 'A'; 65
//	ch2 = 'a'; 97
//	
//	ch1 += 32;
//	ch2 -= 32;
//	printf("ch1 : %c,ch2 : %c",ch1,ch2);
//	스페이스 32 null 0 
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("문자를 입력하세요:");
//	ch = getchar();
//	putchar(ch);
//	printf("%c %d\n",ch,ch);
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("문자를 입력하세요:");
//	scanf("%c",&ch);
//	printf("%c %d\n",ch,ch);
//	
//	scanf("%c",&ch);
//	
//	printf("문자를 입력하세요:")
//	scanf("%c",&ch);
//	printf("%c %d\n",ch,ch); 
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = {};
//	char arr2[20];
//	scanf("%s",arr1);
//	
//	printf("arr : %s",arr1);
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = {1,2,3,4};
//	
//	char b[] = {'h','e','l','l','o'};
//}
//#include<stdio.h>
//int main()
//{
//	char word[20];
//	
//	printf("단어를 입력하세요:");
//	scanf("%s",word);
//	printf("입력하신 단어는%s입니다.",word);
//	return 0; 
//}
//#include<stdio.h>
//int main()
//{
//	char sentence[80];
//	puts("문장을 입력하세요:");
//	gets(sentence);
//	puts(sentence);
//	printf("%s",sentence);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for(int i = 65;i<=90;i++)
//	{
//		printf("%c",i);
//	}
//	for(int i = 97;i<=122;i++)
//	{
//		printf("%c",i);
//	}
//}
#include<stdio.h>
int main()
{
	char str[20];
	scanf("%s",str);
	
	for(int i = 0;str[i];i++)
	{
		printf("%c",str[i]+32);
	}
}




