//0520-2022320071-아이샤-과제-1

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
        printf("학번(8자리 :");
        gets(num);

        for (i = 0; i < strlen(num); i++)
        {
            if (num[i] >= '0' && num[i] <= '9')
            {
                count++;
            }
        }

    } while (count != strlen(num));

    printf("영문 이름: ");
    gets(name);

    printf("\n학번 (8자리) : %s", num);
    printf("\n영문 이름: ");
    while (name[j])
    {
        ch = name[j];
        printf("%c", toupper(ch));
        j++;
    }
    return 0;

}