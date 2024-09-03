#include <stdio.h>

int main()
{
    int 세균, 시간, i;

    printf("세균 마리 수 입력: ");
    scanf("%d", &세균);

    printf("보낼 시간 입력: ");
    scanf("%d", &시간);

    for(i = 0; i < 시간; i++)
    {
        세균 = 세균 * 4;
    }
    printf("%d 시간 후 세균의 수는 %d 마리 입니다.\n", 시간, 세균);

    return 0;
}