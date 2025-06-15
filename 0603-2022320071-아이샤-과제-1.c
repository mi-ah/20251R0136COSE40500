//0603-2022320071-���̻�-����-1

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
        printf("�޸� Ȱ�� ����\n");
        exit(1);
    }

    int x = 1;
    st[0]->num = 0;
    st[0]->grade = 0.0;

    printf("-------- �л� ���� �Է� (����:0) ---------");
    while (1)
    {
        printf("\n��ȣ: "); scanf("%d", &st[x]->num);
        if (st[x]->num == st[x - 1]->num)
        {
            printf("������ ������ ����!\n");
            continue;
        }
        if (st[x]->num == 0)
        {
            break;
        }
        printf("�̸�: "); scanf("%s", st[x]->name);
        printf("����: "); scanf("%f", &st[x]->grade);
        if (st[x]->grade >= st[x - 1]->grade)
        {
            double highest_mark = st[x]->grade;
            result = x;
        }
        x++;
    }
    
    printf("-\n\n--------- ��ü �л� ���� ----------\n");
    for (int i = 1; i < x; i++)
    {
        printf("\n��ȣ: %d, �̸�: %s, ����: %.1f", st[i]->num, st[i]->name, st[i]->grade);
    }

    printf("\n\n------- �ְ� ���� �л� ���� --------");
    printf("\n��ȣ: %d, �̸�: %s, ����: %.1f\n", st[result]->num, st[result]->name, st[result]->grade);

    for (int i = 0; i < sizeof(st) / sizeof(STU*); i++)
        free(st);

    return 0;
}
