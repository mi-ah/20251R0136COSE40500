//0401-2022320071-���̻�

#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int tax, amount;
	
	printf("���� �ݾ� �Է� (���� ����) : ");
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
	printf("�ҵ漼�� %d�����Դϴ�", tax);

	return 0;
}