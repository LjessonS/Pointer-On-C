#include <stdio.h>
#include <stdlib.h>

unsigned int reverse_bit(int value)
{
	unsigned int result = 0;
	unsigned int i;

	/*ֻҪi����0�ͼ��������ʹѭ����������ֳ��޹�*/
	for (i = 1; i != 0; i <<= 1)
	{
		result <<= 1;
		if (value & 1)
		{
			result |= 1;
		}
		value >>= 1;
	}
	return result;
}

int main(void)
{
	unsigned int value;
	printf("Input a value to reverse :");
	scanf_s("%d", &value);

	value = reverse_bit(value);
	printf("After reverse, value = %d\n", value);
	return EXIT_SUCCESS;
}