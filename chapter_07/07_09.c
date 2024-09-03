#include <stdio.h>

int main()
{
    int n1, n2, lcm;

    printf("두 정수 입력: ");
    scanf("%d %d", &n1, &n2);

    // lcm 초기화: n1과 n2 중 큰 값으로 설정
    lcm = (n1 > n2) ? n1 : n2;

    // 최소공배수를 찾기 위한 반복문
    while(1)
    {
        // lcm이 n1과 n2의 배수인지 확인
        if(lcm % n1 == 0 && lcm % n2 == 0)
            break; // 배수를 찾으면 반복문 종료

        lcm++; // lcm을 증가시킴
    }

    printf("최소공배수는 %d 입니다.\n", lcm);
    return 0;
}