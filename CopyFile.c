/*
�����ļ�
*/

#include "custom.h"


void CopyFile(FILE *fp)
{
	FILE *in;
	if ((in = fopen("D:\\�����\\Documents\\���ݽṹ���㷨�ۺ����\\�ı��ļ��е��ʵļ��������\\��Դ�ļ�\\Decompression.txt", "r")) == NULL)
	{
		printf("�޷��򿪽�Ҫ���Ƶ��ļ���\n");
		exit(1);
	}
	char c;
	while ((c = getc(in)) != EOF)
	{
		putc(c,fp);
	}
	fclose(in);
	printf("��д�����ݡ�\n");
	fclose(fp);
}