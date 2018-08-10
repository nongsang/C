#include <stdio.h>

void Print();

int main()
{
	int a = 10, b = 20;				// 변수 이름이 a, b로 Print()의 변수 이름과 같다.

	printf("%d, %d\n", a, b);		// 변수 이름이 같아도 함수가 다르면
	Print();						// 다른 변수로 처리한다.
									// 이를 지역변수라고 한다.

	return 0;
}

void Print()
{
	int a = 30, b = 40;				// 변수 이름이 a, b로 main()의 변수 이름과 같다.

	printf("%d, %d\n", a, b);
}