/*
�򿪴������ı��ĵ�
*/

#include "custom.h"

FILE* OpenFile(char file_name[]) {
	FILE* fp;
	if ((fp = fopen(file_name, "a+")) == NULL)
	{
		printf("�޷��򿪣�\n");
		exit(1);
	}
	return fp;
}