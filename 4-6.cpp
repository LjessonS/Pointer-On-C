#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 30

int substr(char dst[], char src[], int start, int len)
{
	int dst_index, src_index;
	dst_index = 0;

	if (start > 0 && len > 0)
	{
		for (src_index = 0; src_index < start && src[src_index] != '\0'; src_index++)
			;
		while (len > 0 && src[src_index] != '\0')
		{
			dst[dst_index] = src[src_index];
			dst_index++;
			src_index++;
			len--;
		}
	}
	dst[dst_index] = '\0';
	return dst_index;
}

int main(void)
{
	int start, len, dst_len;
	char src[MAX_LEN] , dst[MAX_LEN];
	//char c;
	int count = 0;

	printf("�����븴�ƿ�ʼ��λ��start, �Լ����Ƶĳ���len\n");
	scanf_s("%d %d", &start, &len);
	getchar();

	printf("������Դ�ַ���: ");
	if (gets_s(src) != NULL)
	{
		dst_len = substr(dst, src, start, len);
	}
	
	printf(dst);

	return EXIT_SUCCESS;
}