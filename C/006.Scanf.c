#include <stdio.h>

int main()
{
	char firstchar;		// 문자를 받는 char형
	int inum;			// 정수를 받는 int형
	float fnum;			// 실수를 받는 float형
	double dnum;		// float보다 표현범위가 넓은 double
	char secondchar;
	char string[20];	// char형 배열

	printf("문자 : ");
	scanf("%c", &firstchar);			// scanf()는 &로 입력 받으며, 문자는 %c로 입력받는다.
	printf("문자 : %c\n", firstchar);	// &에 대해서는 포인터에서 설명한다.

	printf("정수 : ");
	scanf("%d", &inum);					// 정수는 %d로 입력받는다.
	printf("정수 : %d\n", inum);			// scanf는 시스템 버퍼를 사용한다.
										// 

	printf("실수 float : ");
	scanf("%f", &fnum);					// float형 실수는 %f로 입력받아야 한다.
	printf("실수 float : %f\n", fnum);	// double형을 %f로 받으면 제대로된 값이 나오지 않는다.

	printf("실수 double : ");
	scanf("%lf", &dnum);				// double형 실수는 %lf로 입력받아야 한다.
	printf("실수 double : %f\n", dnum);	// float형을 %lf를 입력하면 값이 제대로 입력되지 않는다.

	printf("문자 : ");
	scanf("%c", &secondchar);			// 여기서 입력을 무시한다.
	printf("문자 : %c\n", secondchar);	// 입력을 받은 경우 enter값까지 시스템 버퍼에 저장이 된다.
										// 입력받은 값은 변수에 저장이 되지만 시스템 버퍼에 enter값은 남게 된다.
										// 이미 많은 입력이 있었다.
										// 시스템 버퍼에는 이미 enter값이 들어가 있다.
										// 그렇기 때문에 %c에서 enter값을 읽으면서 입력이 무시되는 것이다.

	printf("문자 : ");
	scanf(" %c", &secondchar);			// "%c"를 " %c"로 바꾸면 입력이 된다.
	printf("문자 : %c\n", secondchar);	// 서식문자 앞을 띄면 앞서 입력된 값들을 모두 무시한다는 의미다.
										// 따라서 시스템 버퍼에 있던 enter값은 무시되는 것이다.

	printf("문자열 : ");
	scanf("%s", string);				// char형 배열은 문자열을 저장할 수 있으며, &를 붙이지 않아도 된다.
	printf("문자열 : %s\n", string);		// 왜인지는 포인터에서 설명한다.

	printf("문자열 : ");
	scanf("%s", &string);				// 배열형에 입력을 할 때 &를 붙여도 된다.
	printf("문자열 : %s\n", string);
}