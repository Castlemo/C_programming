#include <stdio.h>
#include <unistd.h>

int main()
{
    int i, x, sum = 0;

    for(i = 0; i < 3; i++)
    {
        printf("숫자를 입력하시오: ");
        scanf("%d", &x);

        if(x < 0)
            i--;
        
        else
            sum += x;
    }

    printf("숫자의 합: %d\n", sum);
    
    return 0;
}