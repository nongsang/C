#include <stdio.h>

int main()
{
	printf("a�� �빮�ڷ� ǥ���ϸ� %c�Դϴ�.\n", 'A');			// %c�� �� ���ڸ� ǥ���ϸ�, ''�� �� ���ڸ� �޴´�.
	printf("%s %c�Դϴ�.\n", "a�� �빮�ڷ� ǥ���ϸ�", 'A');	// %s�� ���ڿ��� ǥ���ϸ�, ""�� ���ڿ��� �޴´�.
	printf("%s %d %s\n", "2 ���ϱ� 3��", 2 * 3, "�Դϴ�.");	// ���� �������� ���ڿ��� �ڵ����� ��ȯ�Ͽ� ǥ���Ѵ�.

	return 0;
}