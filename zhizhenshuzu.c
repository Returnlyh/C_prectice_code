# include <stdio.h>
#include <string.h>
int main()
{
    // int a = 1,b =2,c=3,d=4,e=5;
    // int *p[5] = {&a,&b,&c,&d,&e};
    // int i;

    // for (i = 0; i<5; i++)
    // {
    //     printf("%d\n", *p[i]);
    //     printf("%p\n", p[i]);
    // }

    // 指针数组里面存放的是字符串首个字符的地址，
    // 当它使用%s操作是就是取出该地址及其后面的全部字符
    // 当用%d操作时就是输出这个字符串首字符的地址
    // 当用*p[i]时取出的是首字符

    char *p2[3] = {
        "bagelixiaer",
        "yaerligeba",
        "jibayalier"
    };

    int j;

    for (j=0; j<3; j++)
    {
        printf("%s\n", p2[j]);
        printf("%p\n", p2[j]);
        // printf("%c\n", *p2[j]);
        // printf("%c\n", *p2[j]);
        // printf("%p\n", *p2[j]);
    }

    // char a[] = "iloveu";
    // printf("%s\n", a);
    // printf("%p\n", a);

/*
    int str[] = {'i','l','o','v','e','u'};
    printf("*str = str[0]\n");
        printf("%c\n", *str);
        printf("%c\n", str[0]);
 
    int e;
    for (e=0;e<=5;e++){
        printf("str[%d] =*(str+%d)\n", e,e);
        printf("%c\n", str[e]);
        printf("%c\n", *(str+e));
    }
*/
}