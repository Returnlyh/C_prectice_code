#include <stdio.h>

int sum(int n);

int sum(int n)
{
    int result = 0;

    do
    {
        result += n;
    }while (n-- > 0);
    
    return result;
}


int main()
{
    long long int n, result;

    printf("请输入n的值：");
    scanf("%lld", &n);

    result = sum(n);
    printf("1+2+3+...+(n-1)+n的结果是:%lld\n", result);
    
    return 0;
}