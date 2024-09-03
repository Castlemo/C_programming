#include <stdio.h>

int main()
{
    int i, height;

    while(1)
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &height);

        if(height < 0)
                break; //높이가 음수인 경우 프로그램 종료

        for(i = 0; i < height; i++)
        {   
            printf("*\n");
        }
    }
    return 0;
}