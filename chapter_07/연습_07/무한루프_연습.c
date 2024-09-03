//사용자에게 실수를 받아 제곱근을 구해주는 프로그램
#include <stdio.h>
#include <math.h>

int main()
{
    double n;

    printf("종료하려면 음수 입력\n");

    while(1){
        printf("실수를 입력: ");
        scanf("%lf", &n);

        if(n < 0.0) break;

        printf("%.2lf의 제곱근: %.2lf\n", n, sqrt(n)); // double형 실수를 받아 제곱근을 계산하는 라이브러리 함수  
    }
    
    printf("프로그램 종료.\n");

    return 0;
}