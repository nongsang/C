#include  <stdio.h>

int main(void)
{
	int i;

	printf("정수 입력 : ");
	scanf("%d", &i);

	if (i >= 90)						// if문으로 분기를 정할 수 있다.
		printf("90 이상이군요\n");
	else if (i >= 85)					// if문이 거짓이면 else문이 실행된다.
		printf("85 이상이군요\n");
	else								// else if라믄 명령어가 있는게 아니라
	{
		if (i >= 80)					// else 바로 뒤에 if를 붙인 것.
			printf("80 이상이군요\n");
		else
			printf("80 미만이군요\n");
	}
	
	return 0;
}