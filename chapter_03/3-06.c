#include <stdio.h>

int main()
{
    double weight_on_moon, weight_on_earth;

    printf("몸무게를 입력하시오(단위:kg): ");
    scanf("%lf", &weight_on_earth);

    weight_on_moon = weight_on_earth * 0.17;

    printf("달에서의 몸무게는 %.2lfkg입니다.\n", weight_on_moon);

    return 0;
}