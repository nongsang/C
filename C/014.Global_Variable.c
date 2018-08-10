#include <stdio.h>

void Add();

int num;			// 전역 변수, 생성하자마자 자동으로 값을 0으로 초기화한다.

int main()
{
	num += 1;		// num에 1을 더하여 저장한다.
	Add();			// Add()도 num에 1을 더하는 기능이다.

	printf("%d\n", num);	// num에 1을 두번 더했으니 값은 2
							// 전역 변수는 지역 변수와 다르게 어느 함수에서든 접근할 수 있다.

	return 0;
}

void Add()
{
	num += 1;		// num에 1을 더하여 저장한다.
}