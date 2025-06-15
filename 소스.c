
#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

union ip_address {
	int value;
	char ip[4];
};

int main(void)
{
	union ip_address ad;

	ad.ip[3] = 127;
	ad.ip[2] = 0;
	ad.ip[1] = 0;
	ad.ip[0] = 1;

	printf("16진수 = %x\n", ad.value);
	printf("10진수 = %d %d %d %d\n", ad.ip[3], ad.ip[2], ad.ip[1], ad.ip[0]);

	return 0;
}