#include "custom.h"

int main()
{
	FILE *fp;
	char file_name[256] = { 0 };

	while (1)
	{
		printf("1����������ı��ļ����ļ������û��������롣(���Ƚ�������ļ���\n");
		printf("2��ͳ������õ������ı��еĳ��ִ������������û��������롣\n");
		printf("3������������õ������ڵ��кš������г��ֵĴ����Լ��ڸ����е���Ӧλ�á��������û��������롣\n");
		printf("���������˳�,�����룺");

		int n;
		scanf("%d", &n);
		getchar();
		printf("\n");

		switch (n)
		{
		case 1:
			fp = CreateFile(file_name);
			printf("��ɣ�\n");
			fclose(fp);
			fp = OpenFile(file_name);
			CopyFile(fp);
			break;

		case 2:
			fp = OpenFile(file_name);
			WordCount(fp);
			printf("��ɣ�\n");
			break;

		case 3:
			fp = OpenFile(file_name);
			Retrieval(fp);
			printf("��ɣ�\n");
			break;

		default:
			return 0;
		}

		printf("\n");
	}

	return 0;
}