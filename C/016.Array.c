#include <stdio.h>

int main()
{
	int student1[5];					// �迭�� ũ�Ⱑ 5������ �ʱ�ȭ�� ���� �ʾҴ�.
	student1[4] = 39;					// �迭�� ù��°�� 0���̹Ƿ� 4���� �ټ���°��.
										// �׷��Ƿ� �ټ���°, ������ ������ 39�� �ִ´�.

	int student2[5] = { 30, 40, 50 };	// �������ڸ��� ù��°���� ���ʷ� ���� �ִ´�.


	printf("student1\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("studant1[%d] : %d\n", i, student1[i]);	// student1 �迭�� �ʱ�ȭ�� ���� �ʾ����Ƿ� ������ ����� ���� ������ ���̴�.
	}

	printf("\n");

	printf("student2\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("studant2[%d] : %d\n", i, student2[i]);	// student2 �迭�� �ʱ�ȭ�� ������ ���� �־����� ���� �κ��� 0���� �ʱ�ȭ�Ѵ�.
	}
}