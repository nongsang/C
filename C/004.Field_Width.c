#include <stdio.h>

int main()
{
	printf("%03d, %03d, %03d\n", 1, 20, 300);		// 0은 빈 자리를 0으로 채우란 뜻이고, 3은 3칸 자리를 띄라는 뜻이다.
	printf("%+3d, %+3d, %+3d\n", 1, 20, 300);		// 부호를 표현하면서 3칸씩 앞에서 띄워 출력한다.
	printf("%-3d, %-3d, %-3d\n", 1, 20, 300);		// 부호를 표현할 수 없으면 뒤에서 칸을 맞춘다.
	printf("%+3d, %+3d, %+3d\n", 1, 20, -300);		// 부호가 다르면 출력하려는 값에 부호를 맞춘다.

	printf("%.3f\n", 0.1234567);					// .과 숫자로 소숫점 표현범위를 강제할 수 있다.
	printf("%.8f\n", 0.1234567);					// 표현범위를 늘릴 수 있다.
	printf("%.9lf\n", 0.1234567);					// %lf는 표현범위가 넓으므로 더욱 정밀한 값을 출력할 수 있다.

	return 0;
}