#include <stdio.h>

void count();

int main()
{
	count();
	count();
	count();

	return 0;
}

void count()
{
	static int x = 0;					// ������ �������� �����Ͽ���.
	int y = 0;							// �Ϲ� ����

	x = x + 1;
	y = y + 1;
	printf("x = %d, y = %d\n", x, y);	// x�� ���� �����̱� ������ �Լ��� ������ �������� �ʰ� ���� �����ȴ�.
										// y�� �Ϲ� �����̹Ƿ� �Լ��� ������ �����ȴ�.
}