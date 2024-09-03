// 소문자를 입력받아 대문자로 출력해주는 프로그램
#include <stdio.h>

int main()
{
    char letter;

    while(1)
    {
        printf("소문자 입력: ");
        scanf(" %c", &letter);//공백 문자 제외

        if( letter == 'Q')
            printf("프로그램 종료\n");
            break;
        
        if( letter < 'a' || letter > 'z')
            continue;
        
        letter -= 32; // 소문자 -> 대문자

        printf("변환된 대문자는 %c 입니다.\n", letter);
    }
    return 0;
}