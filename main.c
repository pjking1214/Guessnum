#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�������һ�����֣���Χ1-1000����Ҫ���û����룬��ʾ���˻�С�ˣ��ٴ�Ҫ���û����룬ֱ����ȷ����ӡ���������
//������ö����㷨ʱ���ܹ����ٵõ��������ʱ�临�Ӷ�log2n;
//2019-9-2
int main()
{   //���Ӳ²����
    int totalnum=0 ;
    //��ʼ�������
	int randnum;
	srand((unsigned)time(NULL));
    randnum=rand()%1000+1;
	//�����û�����Ҫ���ҵ�����
	int innum=0;
	printf("������Ҫ���ҵ�����");
	scanf("%d",&innum);
	totalnum++;
	//ֻҪ�û�����������������һ�£��ͽ���ѭ���������жϣ���������ʾ���С����Ҫ����������
	while(randnum!=innum)
	{
		if (innum<randnum)
		{
			printf("С�ˣ����ٴ�����Ҫ���ҵ�����");
			scanf("%d",&innum);
			totalnum++;
		}
		else
		{
			printf("���ˣ����ٴ�����Ҫ���ҵ�����");
			scanf("%d",&innum);
			totalnum++;
		}
	}
	printf("�¶��ˣ��������:%d,��һ������%d��",randnum,totalnum);
	return 0;
}
