#include <stdio.h>

void Print();

int main()
{
	int a = 10, b = 20;				// ���� �̸��� a, b�� Print()�� ���� �̸��� ����.

	printf("%d, %d\n", a, b);		// ���� �̸��� ���Ƶ� �Լ��� �ٸ���
	Print();						// �ٸ� ������ ó���Ѵ�.
									// �̸� ����������� �Ѵ�.

	return 0;
}

void Print()
{
	int a = 30, b = 40;				// ���� �̸��� a, b�� main()�� ���� �̸��� ����.

	printf("%d, %d\n", a, b);
}