#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, x, y, answer;
    int A = 0; //맞은 개수 카운트

    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        printf("%d + %d = ", x, y);
        scanf("%d", &answer);

        if(answer == x + y){
            printf("답이 맞았습니다.\n");
            A++;}
        else
            printf("답이 틀렸습니다.\n");
            
    }

    printf("\n맞은 개수: %d/10\n", A);
}