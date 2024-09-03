// 성적 평균
#include <stdio.h>

int main()
{
    int grade = 0, n = 0;
    int sum = 0, average;

    printf("종료하려면 음수를 입력하시오\n");

    while(grade >= 0)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", &grade);

        sum += grade;
        n++; // 학생 수 카운트
    }
    sum = sum - grade;
    n--; //종료하기 위해 적은 음수 값 삭제

    average = sum / n;
    printf("성적의 평균은 %d입니다. \n", average);

    return 0;
}