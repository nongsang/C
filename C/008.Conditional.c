#include  <stdio.h>

int main(void)
{
	int i;

	printf("���� �Է� : ");
	scanf("%d", &i);

	if (i >= 90)						// if������ �б⸦ ���� �� �ִ�.
		printf("90 �̻��̱���\n");
	else if (i >= 85)					// if���� �����̸� else���� ����ȴ�.
		printf("85 �̻��̱���\n");
	else								// else if��� ��ɾ �ִ°� �ƴ϶�
	{
		if (i >= 80)					// else �ٷ� �ڿ� if�� ���� ��.
			printf("80 �̻��̱���\n");
		else
			printf("80 �̸��̱���\n");
	}
	
	return 0;
}