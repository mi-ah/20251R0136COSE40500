//0610-2022320071-���̻�-5

#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	float num1, num2, num3;
	float avg;
	FILE* fp_in, * fp_out;

	fp_in = fopen("input.txt", "r");
	fp_out = fopen("output.txt", "w");

	if (fp_in != NULL)
	{
		while (!feof(fp_in))
		{
			fscanf(fp_in, "%f %f %f", &num1, &num2, &num3);
			printf("�Է°�: %.2f %.2f %.2f\n", num1, num2, num3);

			avg = (num1 + num2 + num3) / 3;
			printf("���: %.2f\n\n", avg);

			if (fp_out != NULL)
				fprintf(fp_out, "���: %.2f\n", avg);
	
		}
	}
	fclose(fp_in); fclose(fp_out);
	return 0;
}