#include <stdio.h>

int main()
{
	{
		int i, factorial = 1;

		printf("for�� �⺻��\n");

		for (i = 1; i <= 10; ++i)			// �ʱ��, ���ǽ�, ������ ���� ���� �⺻��
		{
			factorial = i * factorial;
			printf("%02d��° factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i = 1, factorial = 1;			// i�� �ʱⰪ�� �־����Ƿ�

		printf("for�� �ʱ�� ���� ��\n");

		for (; i <= 10; ++i)				// �ʱ���� ��� �ݺ��� ����
		{
			factorial = i * factorial;
			printf("%02d��° factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i, factorial = 1;

		printf("for�� ���ǽ� ���� ��\n");

		for (i = 1; ; ++i)					// ���ǽ��� ���
		{
			if (i > 10)						// ���ο� ���ǽ��� �־ ��밡��
				break;

			factorial = i * factorial;
			printf("%02d��° factorial : %d\n", i, factorial);
		}

		printf("\n");
	}

	{
		int i, factorial = 1;

		printf("for�� ������ ���� ��\n");

		for (i = 1; i <= 10;)				// �������� ���
		{
			factorial = i * factorial;
			printf("%02d��° factorial : %d\n", i, factorial);

			++i;							// ���ο� �������� �־ ��밡��
		}
	}
}