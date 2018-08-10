#include <stdio.h>
#define p 20				// 매크로 상수

int main()
{
	p = 10;						// p는 상수이므로 값을 바꿀 수 없다.

	const int num1 = 10;		// const로 num1이라는 이름의 상수를 만들 수 있다.
	num1 = 20;					// num1은 상수이므로 값을 바꿀 수 없다.

	const int num2;				// 아무 값을 넣지 않아도 상수로 만들 수 있다.
	num2 = 10;					// num2는 상수이므로 값을 바꿀 수 없다.

	printf("p : %d\n", p);		// 매크로 상수로 정의된 값 출력
	printf("num1 : %d\n", num1);// const 상수로 정의된 값 출력
	printf("num2 : %d\n", num2);
}