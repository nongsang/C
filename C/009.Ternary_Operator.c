#include <stdio.h>

int main()
{
	int num1 = 2, num2 = 3;
	int result;

	result = (num1 > num2) ? num1 : num2;	// ������ true�� num1��, false�� num2�� result�� �����Ѵ�.
	printf("result : %d\n", result);

	return 0;
}