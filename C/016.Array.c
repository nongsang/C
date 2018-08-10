#include <stdio.h>

int main()
{
	int student1[5];					// 배열의 크기가 5이지만 초기화를 하지 않았다.
	student1[4] = 39;					// 배열의 첫번째는 0번이므로 4번은 다섯번째다.
										// 그러므로 다섯번째, 마지막 공간에 39를 넣는다.

	int student2[5] = { 30, 40, 50 };	// 생성하자마자 첫번째부터 차례로 값을 넣는다.


	printf("student1\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("studant1[%d] : %d\n", i, student1[i]);	// student1 배열은 초기화를 하지 않았으므로 마지막 빼고는 전부 쓰레기 값이다.
	}

	printf("\n");

	printf("student2\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("studant2[%d] : %d\n", i, student2[i]);	// student2 배열은 초기화를 했지만 값을 넣어주지 않은 부분은 0으로 초기화한다.
	}
}