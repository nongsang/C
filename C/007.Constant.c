#include <stdio.h>
#define p 20				// ��ũ�� ���

int main()
{
	p = 10;						// p�� ����̹Ƿ� ���� �ٲ� �� ����.

	const int num1 = 10;		// const�� num1�̶�� �̸��� ����� ���� �� �ִ�.
	num1 = 20;					// num1�� ����̹Ƿ� ���� �ٲ� �� ����.

	const int num2;				// �ƹ� ���� ���� �ʾƵ� ����� ���� �� �ִ�.
	num2 = 10;					// num2�� ����̹Ƿ� ���� �ٲ� �� ����.

	printf("p : %d\n", p);		// ��ũ�� ����� ���ǵ� �� ���
	printf("num1 : %d\n", num1);// const ����� ���ǵ� �� ���
	printf("num2 : %d\n", num2);
}