#include <stdio.h>

int main()
{
	int i = 1, factorial = 1;

	while (i <= 10)					// ���Ǹ��� �̿��ؼ� �ݺ�
	{
		factorial = i * factorial;
		printf("%02d��° factorial : %d\n", i, factorial);

		++i;						// �������� ����� �Ѵ�.
	}
}