//0415-2022320071-���̻�-5

#pragma warning (disable:4996)
#include <stdio.h>
#define STUDENTS 5
#define CLASS 3

int main(void)
{
	int marks[CLASS][STUDENTS] = {
		{50, 60, 70, 80, 90},
		{55, 65, 75, 85, 95},
		{57, 67, 87, 97, 100} };
	int x, y;
	double class_sum, all_sum = 0;


	for (x = 0; x < CLASS; x++)
	{
		class_sum = 0;
		for (y = 0; y < STUDENTS; y++)
			class_sum += marks[x][y];

		printf("%d�� �л����� ��� = %.2f\n", x+1, class_sum/STUDENTS);
		all_sum += class_sum;
	}
	
	printf("��ü �л����� ��� = %.2f", all_sum / (CLASS*STUDENTS));

	return 0;
}