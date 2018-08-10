#include <stdio.h>

void count();

int main()
{
	count();
	count();
	count();

	return 0;
}

void count()
{
	static int x = 0;					// 변수를 정적으로 선언하였다.
	int y = 0;							// 일반 변수

	x = x + 1;
	y = y + 1;
	printf("x = %d, y = %d\n", x, y);	// x는 정적 변수이기 때문에 함수가 끝나도 삭제되지 않고 값도 유지된다.
										// y는 일반 변수이므로 함수가 끝나면 삭제된다.
}