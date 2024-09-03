// 주사위 2개를 던저 합이 6이 되는 경우를 모두 출력
/*
#include <stdio.h>

int main()
{
    int x, y;

    for(x = 1; x <= 6; x++){
        for(y = 1; y <= 6; y++){
            if(x + y == 6)
                printf("주사위A: %d, 주사위B: %d \t합: %d\n", x, y, x+y);
        }
    }       
    return 0;
}
*/

// 주사위를 3개 던져서 합이 10인 경우
#include <stdio.h>

int main()
{
    int x, y, z;

    for(x = 1; x <= 6; x++){
        for(y = 1; y <= 6; y++){
            for(z = 1; z <= 6; z++){
                if(x + y + z == 10)
                printf("주사위A: %d, 주사위B: %d, 주사위C: %d \t합: %d\n", x, y, z, x+y+z);
            }
        }
    }       
    return 0;
}