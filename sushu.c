#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, num;
    int flag = 1;

    // printf("请输入一个整数 ： ");
    // scanf("%d", &num);
    // num = 10;
    for (num = 2; num <= 50000; num++)
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                    flag = 0;
                    break;
            }
        }

        if (flag)
        {
            printf("%d是一个素数！\n", num);
        }
        else
        {
            printf("%d不是！ \n", num);
            flag = 1;
        }
    }

     

    return 0;
}