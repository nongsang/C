#include <stdio.h>

void Print();			// �Լ��� ����
int Add(int a, int b);	// �Ű������� �ִ� �Լ� ����
int Sub(int, int);		// �Ű������� �̸��� ���� �ȴ�.

int main()
{
	int a = 10, b = 20;
	int result;

	Print();				// ��ȯ���� void���� �Լ��� ���� �ܵ����� ���� ���� �����Ͽ� ����Ѵ�.
	Add(a, b);				// ��ȯ���� void�� �ƴ� �Լ��� �ܵ����� ����� �� �ִ�.
	result = Sub(10, 20);	// ������ �Լ��� ������� ����Ϸ��� �ٸ� ������ ���� �����ؼ� ����ϸ� �ȴ�.

	printf("%d\n", result);
	printf("%d\n", Add(a, b));// �ƴϸ� ���� ������� ����� �� ����ó�� ����ϴ���

	return 0;
}

void Print()		// ��ȯ���� void���̹Ƿ� return�� ��� �ȴ�.
{
	printf("hello, world!\n");

	return;			// �ƴϸ� return�� �ϸ� �ȴ�.
}

int Add(int a, int b)	// ��ȯ���� int�̹Ƿ� 
{
	return a + b;		// return�� int������ ��ȯ�ؾ� �Ѵ�.
}

int Sub(int a, int b)	// ������ �� �Ű����� �̸��� ��������, ������ ���� �Ű����� �̸��� �� �־�� �Ѵ�.
{
	return a - b;
}