//0318-2022320071-아이샤

#pragma warning(disable: 4996)
#include <stdio.h>
#define TEMP 0.55556

int main()
{
	float farrenh, celcius;

	printf("화씨 온도 입력:");
	scanf("%f", &farrenh);

	celcius = TEMP * (farrenh - 32);

	printf("[화씨 %.1f도] = [섭씨 %.1f도]", farrenh, celcius);


	return 0;
}
