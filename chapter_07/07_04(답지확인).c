#include <stdio.h>
#include <unistd.h>

int main()
{
    int x, i;
    
    printf("정수를 입력: ");
    scanf("%d", &x);
    printf("약수: ");

    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
          printf("%d ", i);  
    }

    printf("\n");
    
    return 0;
}