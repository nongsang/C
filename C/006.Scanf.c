#include <stdio.h>

int main()
{
	char firstchar;		// ���ڸ� �޴� char��
	int inum;			// ������ �޴� int��
	float fnum;			// �Ǽ��� �޴� float��
	double dnum;		// float���� ǥ�������� ���� double
	char secondchar;
	char string[20];	// char�� �迭

	printf("���� : ");
	scanf("%c", &firstchar);			// scanf()�� &�� �Է� ������, ���ڴ� %c�� �Է¹޴´�.
	printf("���� : %c\n", firstchar);	// &�� ���ؼ��� �����Ϳ��� �����Ѵ�.

	printf("���� : ");
	scanf("%d", &inum);					// ������ %d�� �Է¹޴´�.
	printf("���� : %d\n", inum);			// scanf�� �ý��� ���۸� ����Ѵ�.
										// 

	printf("�Ǽ� float : ");
	scanf("%f", &fnum);					// float�� �Ǽ��� %f�� �Է¹޾ƾ� �Ѵ�.
	printf("�Ǽ� float : %f\n", fnum);	// double���� %f�� ������ ����ε� ���� ������ �ʴ´�.

	printf("�Ǽ� double : ");
	scanf("%lf", &dnum);				// double�� �Ǽ��� %lf�� �Է¹޾ƾ� �Ѵ�.
	printf("�Ǽ� double : %f\n", dnum);	// float���� %lf�� �Է��ϸ� ���� ����� �Էµ��� �ʴ´�.

	printf("���� : ");
	scanf("%c", &secondchar);			// ���⼭ �Է��� �����Ѵ�.
	printf("���� : %c\n", secondchar);	// �Է��� ���� ��� enter������ �ý��� ���ۿ� ������ �ȴ�.
										// �Է¹��� ���� ������ ������ ������ �ý��� ���ۿ� enter���� ���� �ȴ�.
										// �̹� ���� �Է��� �־���.
										// �ý��� ���ۿ��� �̹� enter���� �� �ִ�.
										// �׷��� ������ %c���� enter���� �����鼭 �Է��� ���õǴ� ���̴�.

	printf("���� : ");
	scanf(" %c", &secondchar);			// "%c"�� " %c"�� �ٲٸ� �Է��� �ȴ�.
	printf("���� : %c\n", secondchar);	// ���Ĺ��� ���� ��� �ռ� �Էµ� ������ ��� �����Ѵٴ� �ǹ̴�.
										// ���� �ý��� ���ۿ� �ִ� enter���� ���õǴ� ���̴�.

	printf("���ڿ� : ");
	scanf("%s", string);				// char�� �迭�� ���ڿ��� ������ �� ������, &�� ������ �ʾƵ� �ȴ�.
	printf("���ڿ� : %s\n", string);		// �������� �����Ϳ��� �����Ѵ�.

	printf("���ڿ� : ");
	scanf("%s", &string);				// �迭���� �Է��� �� �� &�� �ٿ��� �ȴ�.
	printf("���ڿ� : %s\n", string);
}