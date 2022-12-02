#include <stdio.h>

int max(int, int);

int max(int a ,int b)
{
    if (a > b)    
            return a;
    else 
            return b;
}

int main()
{
    long long unsigned int a, b, d;
  
    printf("请输入两个参数：");
    scanf("%llu%llu", &a, &b);
    d = max(a,b);

    printf("大的值是：%llu\n", d);

}