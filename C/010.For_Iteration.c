#include <stdio.h>

int main()
{
	{
		int i, factorial = 1;

		printf("for문 기본형\n");

		for (i = 1; i <= 10; ++i)			// 초기식, 조건식, 증감식 전부 넣은 기본형
		{
			factorial = i * factorial;
			printf("%02d번째 factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i = 1, factorial = 1;			// i에 초기값을 넣었으므로

		printf("for문 초기식 없는 형\n");

		for (; i <= 10; ++i)				// 초기식이 없어도 반복이 가능
		{
			factorial = i * factorial;
			printf("%02d번째 factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i, factorial = 1;

		printf("for문 조건식 없는 형\n");

		for (i = 1; ; ++i)					// 조건식이 없어도
		{
			if (i > 10)						// 내부에 조건식을 넣어서 사용가능
				break;

			factorial = i * factorial;
			printf("%02d번째 factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i, factorial = 1;

		printf("for문 증감식 없는 형\n");

		for (i = 1; i <= 10;)				// 증감식이 없어도
		{
			factorial = i * factorial;
			printf("%02d번째 factorial : %d\n", i, factorial);

			++i;							// 내부에 증감식을 넣어서 사용가능
		}
	}
}