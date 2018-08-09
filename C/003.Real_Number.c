#include <stdio.h>

int main()
{
	printf("10진수 정수 : %d\n", 0.5);		// %d는 실수의 정수부분만 출력
	printf("10진수 실수 : %f\n", 0.5);		// 실수 표현은 소숫점 6번째 자리까지만
	printf("10진수 실수 : %lf\n", 0.5);		// 출력할 수 있다.

	printf("소숫점 이하 6자리 실수 : %f\n",  0.1234567);		// 6자리를 넘어가면
	printf("소숫점 이하 6자리 실수 : %f\n",  0.1234565);		// 반올림하여 표현한다.
	printf("소숫점 이하 6자리 실수 : %lf\n", 0.1234567);		// %lf로도 실수를 출력한다.
															// %f와 %lf의 차이는 float형이냐 double형이냐이다.
															// double이 float보다 표현범위가 넓다.
	return 0;
}