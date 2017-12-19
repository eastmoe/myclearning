#include<stdio.h>
#include<string.h>
void strcat(char *str1,char *str2)
{
 int i;
 for(i=0;str+i!=NULL;i++)
 {
  
 }
}
void main()
{
 char str1[20],str2[20];
 printf("请输入字符串1（长度小于20）：");
 gets(str1);
 printf("请输入字符串2（长度小于20）：");
 gets(str2);
 strcat(&str1[0],str2[0]);
 printf("连接后的字符串为：\n");
 puts(str1);
 printf("\n");
}
