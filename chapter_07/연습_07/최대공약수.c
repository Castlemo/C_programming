// 최대공약수 구하기
#include <stdio.h>

int main()
{
    int x, y, r;

    printf("두 개의 정수 입력(큰 값, 작은 값): ");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대공약수는 %d 입니다. \n", x);
    
    return 0;
}