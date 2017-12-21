#include<stdio.h> 
void mystrcat(char a[],char b[])
{ 
 int i=0,j=0; 
 while(a[i++]!='\0');  
  i--; 
 while(b[j]!='\0')
 {  
  a[i++]=b[j++]; 
 }  
 a[i]='\0';  
} 
void main() 
{ 
 char a[100],b[100]; 
 printf("请输入字符串1：");
 gets(a); 
 printf("请输入字符串2：");
 gets(b); 
 mystrcat(a,b);  
 printf("1和2连接的结果为：");
 puts(a);  
}
