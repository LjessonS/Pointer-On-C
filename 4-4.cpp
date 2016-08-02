#include <stdio.h>
#include <stdlib.h>

void copy_n(char dst[], char src[], int n)
{
	int dst_index, src_index;
	src_index = 0;
	
	for (dst_index = 0; dst_index < n; dst_index++)
	{
		dst[dst_index] = src[src_index];
		if (src[src_index] != 0)
		{
			src_index++;
		}
	}
}

int main(void)
{
	char c;
	char *src = NULL;
	char *dst = NULL;
	int n, src_len = 0;

	src = (char *)malloc(20 * sizeof(char));
	printf("������Դ���������: ");
	while ((c = getchar()) != '\n')
	{
		src[src_len] = c;
		src_len++;
	}

	printf("������Ҫ��ֵ����ֵ����: ");
	scanf_s("%d", &n);
	dst = (char *)malloc(n * sizeof(char));
	if (dst ==  NULL)
	{
		printf("�����ڴ�ʧ��\n");
		return EXIT_FAILURE;
	}

	if (n <= src_len)
	{
		copy_n(dst, src, n);
	} 
	else
	{
		copy_n(dst, src, src_len);
	}

	printf(dst);
	return EXIT_SUCCESS;
}