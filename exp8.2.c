#include <stdio.h> 
#include <stdlib.h> 
 void main() 
 { 
  char ch;
  FILE *fp1,*fp2; 
  if((fp1=fopen("D:\\file1.txt","r"))==NULL) 
  { 
   printf("无法打开文件D:\\file1.txt！"); 
   exit(0); 
  } 
  if((fp2=fopen("D:\\file2.txt","a+"))==NULL) 
  { 
   printf("无法打开文件D:\\file2.txt！"); 
   exit(0); 
  } 
  ch=fgetc(fp1); 
  printf("1 "); 
  for(;ch!=EOF;); 
  { 
   ch=fgetc(fp1); 
   fprintf(fp2,"%c",ch); 
  } 
  fclose(fp1); 
  fclose(fp2); 
 }
