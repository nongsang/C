#include <stdio.h>

int main()
{
	int arr[3][3] = { { 1,2 },{ 3 },4 };	// 다차원 배열을 초기화한다.
											// {}로 묶으면 하나의 행의 첫번째부터 값을 넣는다.
											// {}로 묶이지 않은 값은 다음 행으로 넘어가서 저장한다.

	printf("[2][2]입력 : ");
	scanf("%d", &arr[2][2]);				// 배열 공간 하나에 값을 저장한다.

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			printf("%d", arr[i][j]);
		printf("\n");
	}
}