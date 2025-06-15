//0318 - 1학년 실습

#pragma warning(disable: 4996)
#include <stdio.h>


int main()
{
	float farrenh, celcius;
	const float TEMP = 0.55556;


	printf("화씨 온도 입력:");
	scanf("%f", &farrenh);

	celcius = TEMP * (farrenh - 32);

	printf("[화씨 %.1f도] = [섭씨 %.1f도]", farrenh, celcius);


	return 0;
}
