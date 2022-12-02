#include <stdio.h>




// &var表示取var的地址， *p=（地址）表示将该地址表示的数值赋予p，即p=var; 
int main()
{
    int var = 3;
    int *p = &var;
    printf("int *p = &var\n");
    
    printf("*p: %d\n", *p);

    printf("p: %p\n", p);

    *p = 5;
    printf("var: %d\n", var);
    *p = 7;
    printf("var: %d\n", var);
    *p = 9;
    printf("var: %d\n", var);
    
    printf("%p\n", &var);
    printf("请输入一个整数以改变var:");
    scanf("%d", p);
    printf("%p\n", &var);
    printf("var: %d\n", var);
    printf("%p\n", p);

}