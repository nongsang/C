#include <stdio.h>

int main()
{
	int i = 1, factorial = 1;

	while (i <= 10)					// 조건만을 이용해서 반복
	{
		factorial = i * factorial;
		printf("%02d번째 factorial : %d\n", i, factorial);

		++i;						// 증감식을 써줘야 한다.
	}
}