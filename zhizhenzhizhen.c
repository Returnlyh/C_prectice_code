#include <stdio.h>

int main()
{
    char *book[] = {
        "abc",
        "poi",
        "jkl",
        "qwe",
        "rty"
    };
    char **a;
    char **b[3];
    int i,j;

    a = &book[4];

    for (i=0; i<4; i++)
    {
        b[i] = &book[i];
    }
    printf("FishC出版的图书有：%s\n", *a);
    printf("FishC出版的图书有：%p\n", *a);
    printf("小甲鱼喜欢的图书有： \n");
    for (j=0; j<4; j++)
    {
        printf("%s\n", *b[j]);
        printf("%p\n", *b[j]);
    }

    return 0;
}