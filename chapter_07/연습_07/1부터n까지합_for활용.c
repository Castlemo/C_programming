#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("정수를 입력: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
        {
            sum += i;
        }

    printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);
    
    return 0;
}