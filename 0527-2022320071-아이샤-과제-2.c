//0527-2022320071-아이샤-과제-2

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

	printf("학생 수(최대 10) : ");
	scanf("%d", &num);

	struct student stu[10];

	for (i = 0; i < num; i++)
	{
		printf("\n번호 : ");
		scanf("%d", &stu[i].stu_num);
		printf("이름 : ");
		scanf("%s", stu[i].name);
		printf("점수 : ");
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
		printf("\n학번: %d,  이름: %s,  학점: %.2f", stu[i].stu_num, stu[i].name, stu[i].grade);

	printf("\n\n평균 학점 : %.2f", total_grade / num);
	printf("\n최고 학점 : %.2f, 이름: %s\n", stu[x].grade, stu[x].name);

	return 0;
}