//0520-2022320071-���̻�-����-1

#include<stdio.h>
#include<string.h>
main()
{
    int count, i, j = 0;
    char num[8] = { 0 };
    char ch, name[100];

    do
    {
        count = 0;
        printf("�й�(8�ڸ� :");
        gets(num);

        for (i = 0; i < strlen(num); i++)
        {
            if (num[i] >= '0' && num[i] <= '9')
            {
                count++;
            }
        }

    } while (count != strlen(num));

    printf("���� �̸�: ");
    gets(name);

    printf("\n�й� (8�ڸ�) : %s", num);
    printf("\n���� �̸�: ");
    while (name[j])
    {
        ch = name[j];
        printf("%c", toupper(ch));
        j++;
    }
    return 0;

}