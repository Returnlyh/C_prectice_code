#include <stdio.h>


// 在给数组赋值超过数组定义长度时，会发生栈溢出，但可以编译运行
int main()
{
    // int a[10], i;

    // for (i = 0;i < 10; i++)
    // {
    //     a[i] = i;
    // }

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\n", a[i]);
    // }

    // 字符数组 = 字符串
    // char str[8] = {'i', 'l', 'o', 'v', 'e', 'l', 'y', 'h'};
    char str[3] = {'i', 'l'};
    // puts(str);
    printf("%s\n", str);
    
    printf("%s\n", "ilovelyh");
    printf("%s\n", "ilovelyh");
}