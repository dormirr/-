/*
�����ı��ļ����ļ������û��������롣
*/

#include "custom.h"

FILE* CreateFile(char file_name[])
{
	FILE *fp;
	strcpy(file_name, "D:\\�����\\Documents\\���ݽṹ���㷨�ۺ����\\�ı��ļ��е��ʵļ��������\\��Դ�ļ�\\");
	printf("������Ҫ������򿪵��ļ���:");
	scanf("%s", file_name + 79);
	if ((fp = fopen(file_name, "a+")) == NULL)
	{
		printf("�޷��򿪣�\n");
		exit(1);
	}
	return fp;
}