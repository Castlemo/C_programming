// n까지의 합
/*
#include <stdio.h>

int main()
{
    int i = 1;
    int n = 0;
    int sum = 0;

    printf("정수를 입력: ");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }

    printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);

    return 0;
}
*/

//짝수 or 홀수 들의 합
#include <stdio.h>

int main()
{
    int i = 0; //짝수는 i를 0으로 초기화 그래야 2부터 더함. 홀수일 경우 1로 초기화.
    int n = 0;
    int sum = 0;

    printf("정수를 입력: ");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i += 2;
    }

    printf("1부터 %d까지의 짝수합은 %d 입니다.\n", n, sum);

    return 0;
}