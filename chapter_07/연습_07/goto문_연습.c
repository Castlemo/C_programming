/*
#include <stdio.h>
#include <conio.h> // _kbhit() 함수를 사용하기 위해 추가 맥에서는 사용안됨.

int main()
{
    int x, y;

    for(y = 1; y < 10000; y++){
        for(x = 1; x < 10; x++){
            if(_kbhit()) // 키보드 입력이 있으면 루프를 종료
                goto OUT;
            
            printf("*");
        }
        printf("\n");
    }
OUT:
    return 0;
}
*/

//리눅스에서 kbhit()함수를 사용하기 위한 헤더 파일
#ifndef LINUX_KBHIT_H_
#define LINUX_KBHIT_H_

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int linux_kbhit(void)
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    // 현재 터미널 설정을 가져옴
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

#endif

#include <stdio.h>

int main()
{
    int x, y;

    for(y = 1; y < 10000; y++){
        for(x = 1; x < 10; x++){
            if(linux_kbhit()) // 키보드 입력이 있으면 루프를 종료
                goto OUT;
            
            printf("*");   
        }
    printf("\n");          
    }
OUT:
    return 0;
}