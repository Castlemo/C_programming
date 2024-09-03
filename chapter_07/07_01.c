#include <stdio.h>
#include <unistd.h>

int main()
{
    int x, i;

    printf("카운터의 초기값을 입력: ");
    scanf("%d", &x);

    for(i = x; i > 0; i--)
    {
        sleep(1);
        printf("%d ", i);
        fflush(stdout); //printf 함수가 버퍼링되어 출력되는 것을 즉시 화면에 표시하도록 하는 함수
    }
    printf("\n");
    return 0;
}