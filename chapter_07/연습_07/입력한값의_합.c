// 사용자가 입력한 값의 합
#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;

    while(i < 5)
    {
        printf("정수 입력: ");
        scanf("%d", &n);
        sum += n;
        i++;
    }

    printf("총 합은 %d 입니다.\n", sum);

    return 0;
}