//0527-2022320071-���̻�-����-2

#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)


struct student {
	int stu_num; char name[10]; double grade;
};

float highest(struct student const* p1, double x)
{
	if (p1->grade >= x)
	{
		return 1;
	}
	else
		return 0;
}

int main(void)
{
	int i, x=0, result=0, num;
	float mark, total_grade = 0.0;
	double high_mark = 0.0;

	printf("�л� ��(�ִ� 10) : ");
	scanf("%d", &num);

	struct student stu[10];

	for (i = 0; i < num; i++)
	{
		printf("\n��ȣ : ");
		scanf("%d", &stu[i].stu_num);
		printf("�̸� : ");
		scanf("%s", stu[i].name);
		printf("���� : ");
		scanf("%lf", &stu[i].grade);
		
		total_grade += stu[i].grade;

		result = highest(&stu[i], high_mark);
		//printf("%d", result);
		if (result == 1)
		{
			x = i;
			high_mark = stu[i].grade;
		}
		
	}
	for (i = 0; i < num; i++)
		printf("\n�й�: %d,  �̸�: %s,  ����: %.2f", stu[i].stu_num, stu[i].name, stu[i].grade);

	printf("\n\n��� ���� : %.2f", total_grade / num);
	printf("\n�ְ� ���� : %.2f, �̸�: %s\n", stu[x].grade, stu[x].name);

	return 0;
}