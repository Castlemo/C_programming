#include <stdio.h>
#include <unistd.h>

int main()
{
    int i, n;
    double r, result = 1.0; 
    printf("실수 값을 입력하시오: ");
    scanf("%lf", &r);
    printf("거듭 제곱 횟수를 입력: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result *= r;
    }

    printf("거듭제곱값은 %.2lf입니다.\n", result);

    return 0;
}