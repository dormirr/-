/*
�������ʵļ���������һ�������ո�ĵ��ʣ�ͳ������õ������ı��еĳ��ִ�����
*/

#include "custom.h"

void WordCount(FILE *fp)
{
	int ch, i = 0, count = 0;
	char find[50], temp[1000];
	printf("������Ҫ���ҵĵ���:");
	gets(find);
	while ((ch = getc(fp)) != EOF)
	{
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
		{
			temp[i] = ch;
			i++;
		}
		else
		{
			temp[i] = '\0';
			if ((strcmp(find, temp)) == 0)
			{
				count++;
			}
			i = 0;
		}
	}
	printf("�����ļ��в��ҵ�����\"%s\" %d ��\n", find, count);
	fclose(fp);
}