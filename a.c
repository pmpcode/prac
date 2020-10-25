#include <stdio.h>
#include <string.h>

void newfile(void)
{
	FILE * stream = NULL;
	errno_t err;
	char str[50];
	char file_name[20];
	char txt[5] = ".txt";
	
	printf("Program Strat.\n");
	printf("Insert file name. ");
	scanf_s("%s", file_name, sizeof(file_name));
	strcat_s(file_name,sizeof(file_name), txt);
	while (1)
	{
		if (getchar() == '\n');
		break;
	}

	err = fopen_s(&stream, file_name,"at");
	printf("0 is quit\n");
	while (1)
	{
		printf("insert: ");
		fgets(str, sizeof(str), stdin);
		if (48 == (int)str[0])
		{
			printf("quit");
			break;
		}
		else
			fputs(str, stream);
	}

	err = fclose(stream);

	return 0;
}

void file



int main(void)
{
	int a;
	while (1)
	{
		printf("원하는 숫자 입력\n1: 파일 생성\n");
		scanf_s("%d", &a);
		if (a == 1)
		{
			newfile();
		}
		if (a == 0) break;
	}
	printf("사용 종료");
}