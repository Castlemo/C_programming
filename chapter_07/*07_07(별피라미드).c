#include <stdio.h>

int main()
{
    int i, j, k;
    
    for(i = 0; i < 10; i++)
    {
        // 공백 출력
        for(k = 10 - i - 1; k > 0; k--)
        {
            printf(" ");
        }
        
        // 별 출력
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
