/*
�����������ʣ�����������õ������ڵ��кš������г��ֵĴ����Լ��ڸ����е���Ӧλ�á�
ÿһ������Ҳ��һ�����ʡ�
*/

#include "custom.h"

void Retrieval(FILE *fp)
{
	int ch, i = 0, count = 0, countt = 0, j = 1, k = 0;
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
			k++;
			temp[i] = '\0';
			if ((strcmp(find, temp)) == 0)
			{
				count++;
				countt++;
				printf("��%d���в��ҵ�����\"%s\"���Ǳ������ҵ��ĵ�%d��\"%s\"���ڱ��еĵ�%d������λ���ϡ�\n", j, find, count, find, k);
			}
			i = 0;
			if (ch == '\n')
			{
				j++;
				if (count != 0)
				{
					printf("��%d���й����ҵ�����\"%s\" %d ����\n", j - 1, find, count);
				}
				k = 0;
				count = 0;
			}
		}
	}
	printf("�����ļ��в��ҵ�����\"%s\" %d ����\n", find, countt);
	fclose(fp);
}