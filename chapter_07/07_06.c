#include <stdio.h>
#include <unistd.h>

int main()
{
    int n, i, result = 0;

    printf("n의 값을 입력: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result += i * i;
    }

    printf("계산값은 %d 입니다.\n", result);

    return 0;
}