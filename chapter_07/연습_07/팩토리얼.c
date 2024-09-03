#include <stdio.h>

int main()
{
    int n, i;
    long factorial = 1; //팩토리얼 값 초기화

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        factorial *= i;
    
    printf("%d!의 값은 %ld 입니다.\n", n, factorial);

    return 0;
}