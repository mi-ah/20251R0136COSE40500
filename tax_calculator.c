//0401-1학년 과제

#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int tax, amount;
	
	printf("과세 금액 입력 (단위 만원) : ");
	scanf("%d", &amount);

	if (amount <= 1200)
		tax = (6 * amount) / 100;
	else if (amount > 1200 && amount <= 4600)
		tax = (15 * amount) / 100;
	else if (amount > 4600 && amount <= 8800)
		tax = (24 * amount) / 100;
	else if (amount > 8800 && amount <= 15000)
		tax = (35 * amount) / 100;
	else if (amount > 15000 && amount <= 30000)
		tax = (38 * amount) / 100;
	else if (amount > 30000 && amount <= 50000)
		tax = (40 * amount) / 100;
	else
		tax = (42 * amount) / 100;

	//printf("tax = %d", tax);
	printf("소득세는 %d만원입니다", tax);

	return 0;
}
