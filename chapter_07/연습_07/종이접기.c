#include <stdio.h>

int main()
{
    double 두께 = 1; 
    int 횟수 = 0, i = 0;

    printf("접을 횟수를 입력: ");
    scanf("%d", &횟수);

    while(i < 횟수)
    {
        두께 = 두께 * 2;
        i++;
    }

    printf("%d번 접었을 때 종이의 두께는 %.2lfmm 입니다.\n", 횟수, 두께);
    
    return 0;
}