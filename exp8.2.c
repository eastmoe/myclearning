#include <stdio.h>
void main()
{
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
 char cht;
 for(;fp1!=EOF;);
 {
  fscanf(fp1,"%c",&cht);
  sprintf(fp2,"%c",cht);
 }
 fclose(fp1);
 fclose(fp2);
}
