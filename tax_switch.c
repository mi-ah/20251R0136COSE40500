//0401-1학년 과제

#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int tax, amount;
	int num = 0;

	printf("과세 금액 입력 (단위 만원) : ");
	scanf("%d", &amount);

	if (amount < 1000)
		num = 1;
	else if (amount >= 1000 && amount < 4000)
		num = 2;
	else if (amount >= 4000 && amount < 8000)
		num = 3;
	
	switch (num)
	{
		case 1:
			tax = (8 * amount) / 100;
			break;
		case 2:
			tax = (17 * amount) / 100;
			break;
		case 3:
			tax = (26 * amount) / 100;
			break;
		default:
			tax = (35 * amount) / 100;
	}
	
	printf("소득세는 %d만원입니다", tax);

	return 0;
}
