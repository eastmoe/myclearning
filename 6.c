#include<stdio.h>
#include<stdlib.h>  //支持rand函数，生成随机数
#include<time.h>  //支持srand函数，给rand函数做种

rolln(int n)  //定义rolin函数，用rand函数生成1-n的随机整数
{
	int a;
	a=(rand()%n+1);  //rand()%(n-m+1)+m用来生成m-n范围内的整数
	return a;
}
void main()
{
    int a,n,i,b,rec;
    step1:  printf("请输入当前50音学习进度:");  //标记step1，结束时可选返回
    scanf("%d",&a);
    step2:  printf("请输入你想测试的次数:");  //标记step2，结束时可选返回
    scanf("%d",&n);
    srand((unsigned)time(0));  //利用当前时间给rand函数做种
	for(i=0;i<n;i++)  //利用for做多次测试循环
	{
            b=rolln(a);  //用rolin函数产生随机数并赋值给b
            printf("第%d次检测开始，请回想这个音:",i+1);
	    switch (b)  //利用随机数随机选取已学过的音
		{
	           case 1:printf("あ\n");break;
	           case 2:printf("い\n");break;
	           case 3:printf("う\n");break;
	           case 4:printf("え\n");break;
	           case 5:printf("お\n");break;
	           case 6:printf("か\n");break;
	           case 7:printf("き\n");break;
	           case 8:printf("く\n");break;
	           case 9:printf("け\n");break;
	           case 10:printf("こ\n");break;
	           case 11:printf("さ\n");break;
	           case 12:printf("し\n");break;
	           case 13:printf("す\n");break;
	           case 14:printf("せ\n");break;
	           case 15:printf("そ\n");break;
	           case 16:printf("た\n");break;
	           case 17:printf("ち\n");break;
	           case 18:printf("つ\n");break;
	           case 19:printf("て\n");break;
	           case 20:printf("と\n");break;
	           case 21:printf("な\n");break;
	           case 22:printf("に\n");break;
	           case 23:printf("ぬ\n");break;
	           case 24:printf("ね\n");break;
	           case 25:printf("の\n");break;
	           case 26:printf("は\n");break;
                   case 27:printf("ひ\n");break;
	           case 28:printf("ふ\n");break;
	           case 29:printf("へ\n");break;
	           case 30:printf("ほ\n");break;
	           case 31:printf("ま\n");break;
	           case 32:printf("み\n");break;
	           case 33:printf("む\n");break;
	           case 34:printf("め\n");break;
	           case 35:printf("も\n");break;
	           case 36:printf("や\n");break;
	           case 37:printf("い\n");break;
	           case 38:printf("ゆ\n");break;
	           case 39:printf("え\n");break;
	           case 40:printf("よ\n");break;
	           case 41:printf("ら\n");break;
	           case 42:printf("り\n");break;
	           case 43:printf("る\n");break;
	           case 44:printf("れ\n");break;
	           case 45:printf("ろ\n");break;
	           case 46:printf("わ\n");break;
	           case 47:printf("い\n");break;
	           case 48:printf("う\n");break;
	           case 49:printf("え\n");break;
	           case 50:printf("を\n");break;
		}
	    system("pause");  //每一次测试后暂停
	}
	printf("测试结束，按[1]更新学习进度并重新开始，按[2]从当前进度重新开始，按[3]退出程序，请输入你想要的选项并按[Enter]健:");
	scanf("%d",&rec);  //根据选择，利用goto语句返回对应的位置
	if(rec==1)
		{
		    goto step1;
	        }
	if(rec==2)
		{
		    goto step2;
	        }
}
