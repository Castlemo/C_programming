// 반감기 계산 프로그램
#include <stdio.h>

int main()
{
    int halflife;
    double initial, current;
    int year = 0;

    printf("반감기를 입력하시오: ");
    scanf("%d", &halflife);

    initial = 100.0;
    current = initial;
    while (current > initial / 10.0)
    {
        year += halflife;
        current = current / 2.0;
        printf("%d 년 후에 남은 양 = %.2lf\n", year, current);
    }
    
    printf("1/10이하로 되기까지 걸린 시간은 %d 년 입니다.\n", year);
    return 0;
}