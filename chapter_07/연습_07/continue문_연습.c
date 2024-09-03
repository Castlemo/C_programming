#include <stdio.h>

int main()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        if(i%3 == 0)
            continue;//3의 배수인 경우 밑의 printf로 가지 않고 바로 증감식으로 이동하여 반복한다.^
        
        printf("%d ", i);
    }

    return 0;
}