#include <stdio.h>
//피보나치 수열 다시 익혀야함!

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, c;

    printf("몇번째 항까지 구하나요?: ");
    scanf("%d", &n);

    printf("피보나치 수열: ");

    for (i = 0; i < n; i++) 
    {
        if (i <= 1)
            c = i;
        else 
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%llu ", c);
    }

    printf("\n");

    return 0;
}