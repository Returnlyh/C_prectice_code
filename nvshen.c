#include <stdio.h>

int main()
{
    char israin, isfree;

    printf("是否有空？（Y/N）");
    scanf("%c", &isfree);
    
    getchar();

    if (isfree != 'Y' && isfree != 'N')
    {
        printf("请输入正确的信息！\n");
        return 0;
    }

    printf("是否下雨？（Y/N）");
    scanf("%c", &israin);

    if (israin != 'Y' && israin != 'N')
    {
        printf("请输入正确的信息！\n");
        return 0;
    }

    if (isfree == 'Y')
    {
        if (israin == 'Y')
        {
            printf("记得带伞!\n");
        }
    }
    else
    {
        printf("女神没空！\n");
    }
}