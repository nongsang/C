#include <stdio.h>

int main()
{
	int num1 = 2, num2 = 3;
	int result;

	result = (num1 > num2) ? num1 : num2;	// 조건이 true면 num1을, false면 num2을 result에 저장한다.
	printf("result : %d\n", result);

	return 0;
}