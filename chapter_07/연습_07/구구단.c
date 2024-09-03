// While을 이용한 구구단
#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("출력하고 싶은 단: ");
    scanf("%d", &n);

    while(i < 10){
        printf("%d * %d = %2d\n", n, i, n * i);
        i++;
    }
    printf("");

    return 0;
}