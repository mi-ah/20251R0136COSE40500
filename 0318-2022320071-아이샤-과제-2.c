//0318 - 2022320071 - ���̻�

#pragma warning(disable: 4996)
#include <stdio.h>


int main()
{
	float farrenh, celcius;
	const float TEMP = 0.55556;


	printf("ȭ�� �µ� �Է�:");
	scanf("%f", &farrenh);

	celcius = TEMP * (farrenh - 32);

	printf("[ȭ�� %.1f��] = [���� %.1f��]", farrenh, celcius);


	return 0;
}