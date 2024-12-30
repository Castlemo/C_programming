#include <stdio.h>

void HappyBirthday()
{
    int age;
    char name[20];

    printf("몇 살이신가요?: ");
    scanf("%d", &age);
    printf("친구의 이름을 입력해주세요: ");
    scanf("%s", name);

    printf("생일 축하합니다!\n");
    printf("생일 축하합니다!\n");
    printf("사랑하는 %s의 %d번째 생일 축하합니다!\n", name, age);
}

int main(void)
{
    HappyBirthday();
    return 0;
}