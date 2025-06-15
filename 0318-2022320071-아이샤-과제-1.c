//0318-2022320071-¾ÆÀÌ»þ

#pragma warning(disable: 4996)
#include <stdio.h>
#define TEMP 0.55556

int main()
{
	float farrenh, celcius;

	printf("È­¾¾ ¿Âµµ ÀÔ·Â:");
	scanf("%f", &farrenh);

	celcius = TEMP * (farrenh - 32);

	printf("[È­¾¾ %.1fµµ] = [¼·¾¾ %.1fµµ]", farrenh, celcius);


	return 0;
}