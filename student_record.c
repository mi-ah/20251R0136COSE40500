//0603-1학년-과제-1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#pragma warning (disable:4996)

typedef struct {
    int num;
    char name[10];
    float grade;
}STU;


int main(void)
{
    STU* st[10];
    int result;

    for (int i = 0; i < sizeof(st) / sizeof(STU*); i++)
        st[i] = malloc(sizeof(STU));
    if (st == NULL)
    {
        printf("메모리 활당 오류\n");
        exit(1);
    }

    int x = 1;
    st[0]->num = 0;
    st[0]->grade = 0.0;

    printf("-------- 학생 정보 입력 (종료:0) ---------");
    while (1)
    {
        printf("\n번호: "); scanf("%d", &st[x]->num);
        if (st[x]->num == st[x - 1]->num)
        {
            printf("동일한 데이터 존재!\n");
            continue;
        }
        if (st[x]->num == 0)
        {
            break;
        }
        printf("이름: "); scanf("%s", st[x]->name);
        printf("학점: "); scanf("%f", &st[x]->grade);
        if (st[x]->grade >= st[x - 1]->grade)
        {
            double highest_mark = st[x]->grade;
            result = x;
        }
        x++;
    }
    
    printf("-\n\n--------- 잔체 학생 정보 ----------\n");
    for (int i = 1; i < x; i++)
    {
        printf("\n번호: %d, 이름: %s, 학점: %.1f", st[i]->num, st[i]->name, st[i]->grade);
    }

    printf("\n\n------- 최고 학점 학생 정보 --------");
    printf("\n번호: %d, 이름: %s, 학점: %.1f\n", st[result]->num, st[result]->name, st[result]->grade);

    for (int i = 0; i < sizeof(st) / sizeof(STU*); i++)
        free(st);

    return 0;
}
