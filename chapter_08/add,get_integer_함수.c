#include <stdio.h>

int get_integer()
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    return num;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    int num1, num2;
    num1 = get_integer();
    num2 = get_integer();

    int sum = add(num1, num2);

    printf("입력한 두 정수의 합은 %d입니다.\n", sum);
    return 0;
}