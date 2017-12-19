#include <stdio.h>
void main()
{
 int intnu,intbn,intsn,intother,nt;
 char ct;
 FILE *fp1;
 if((fp1=open("d:\\in.txt","r"))=NULL)
 {
  printf("打开文件失败!");
  exit(0);
 }
 intnu=0;
 for(;fp1!=NULL;)
 {
  if((fscanf(fp1,"%d",&nt))!=NULL)
  {
   intnu=intnu+1;
  }
 }
rewind(fp1);
intbn=0;
intsn=0;
 for(;fp1!=NULL;)
 {
  if((fscanf(fp1,"%c",&ct))!=NULL)
  {
   if((ct>64)&&(ct<91))
    intbn=intbn+1;
   if((ct>96)&&(ct<123))
    intsn=intsn+1;
  }
 }
rewind(fp1);
intother=0;
 for(;fp1!=NULL;)
 {
  if((fscanf(fp1,"%c",&ct))!=NULL)
  {
   if(((ct>0)&&(ct<48))||((ct>57)&&(ct<65))||((ct>90)&&(ct<97))||(ct>122)
    intother=intother+1;
  }
 }
printf("文件中有个%d数字，%d个大写字母，%d个小写字母，%d个其他字符。\n",intnu,intbn,intsn,intother);
   fclose(fp1);
}
