#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    while(1)
    {
        sum += i;

        if(sum > 10000)
        {   
            sum = sum - i;
            break;
        }

        i++;
    }
    printf("1부터 %d의 값은 %d입니다.\n", i-1, sum);

    return 0;
}