#include <stdio.h>

int main()
{
    int a, b, c;

    for(a = 1; a <= 100; a++)
    {
        for(b = 1; b <= 100; b++)
        {
            for(c = 1; c <= 100; c++)
            {
                if((a*a+b*b)==c*c)
                    printf("%d %d %d\n", a, b, c);
            }
        }
    }
    return 0;
}

// 중복된 삼각형 출력되는 문제!
// 조건을 수정해서 중복된 삼각형은 출력되지 않도록 하는 방법.
// => b, c의 조건을 수정한다. b = a(b는 항상 a보다 크도록!), c = b + 1(c는 항상 제일 크도록!)