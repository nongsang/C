#include <stdio.h>

void Print();			// 함수를 선언
int Add(int a, int b);	// 매개변수가 있는 함수 선언
int Sub(int, int);		// 매개변수에 이름을 빼도 된다.

int main()
{
	int a = 10, b = 20;
	int result;

	Print();				// 반환형이 void형인 함수는 보통 단독으로 쓰기 위해 정의하여 사용한다.
	Add(a, b);				// 반환형이 void가 아닌 함수도 단독으로 사용할 수 있다.
	result = Sub(10, 20);	// 하지만 함수의 결과물을 사용하려면 다른 변수에 값을 저장해서 사용하면 된다.

	printf("%d\n", result);
	printf("%d\n", Add(a, b));// 아니면 직접 결과물을 출력할 때 변수처럼 사용하던지

	return 0;
}

void Print()		// 반환형은 void형이므로 return이 없어도 된다.
{
	printf("hello, world!\n");

	return;			// 아니면 return만 하면 된다.
}

int Add(int a, int b)	// 반환형이 int이므로 
{
	return a + b;		// return을 int형으로 반환해야 한다.
}

int Sub(int a, int b)	// 선언할 때 매개변수 이름은 없었지만, 정의할 때는 매개변수 이름이 꼭 있어야 한다.
{
	return a - b;
}