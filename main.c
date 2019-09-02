#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//随机生成一个数字（范围1-1000），要求用户输入，提示大了或小了，再次要求用户输入，直到正确，打印出随机数。
//输入采用二分算法时，能够快速得到随机数，时间复杂度log2n;
//2019-9-2
int main()
{
    //初始化随机数
	int randnum;
	srand((unsigned)time(NULL));
    randnum=rand()%1000+1;
	//请求用户输入要查找的数字
	int innum=0;
	printf("请输入要查找的数字");
	scanf("%d",&innum);
	//只要用户输入的数和随机数不一致，就进入循环，进行判断，并给予提示大或小，并要求重新输入
	while(randnum!=innum)
	{
		if (innum<randnum)
		{
			printf("小了，请再次输入要查找的数字");
			scanf("%d",&innum);
		}
		else
		{
			printf("大了，请再次输入要查找的数字");
			scanf("%d",&innum);
		}
	}
	printf("猜对了！随机数是:%d",randnum);
	return 0;
}
