#include <stdio.h>
#include <unistd.h>

int main()
{
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
            sum += i;
    }
    printf("1부터 100까지의 3의 배수 합: %d\n", sum);
    
    return 0;
}