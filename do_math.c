#include <stdio.h>
#include <math.h>

int main()
{
        int h;
	
	printf("你多大了:");
	scanf("%d", &h);
	
	if (h >= 18)
	{
		printf("请进！\n");
	}
	
        
        // int i, j, k;
        // _Bool a;
        // i = 1 + 2;
        // j = 1 + 2 * 3;
        // k = i + j + -1 + pow(2, 3);
        // a = 0 == 0 || 0 == 0;
        // printf("%d\n", k);
        // printf("%d\n", a);
        // return 0;
}

int other()
{
           /* 我的第一个 C 程序 */
	/*   
	printf("Hello, World! \n");
	int i, j, k;
	_Bool a;
	i = 1 + 2;
	j = 1 + 2 * 3;
	k = i + j + -1 + pow(2, 3);
	a = 0 == 0 || 0 == 0;
	printf("%d\n", k);
	printf("%d\n", a);

	printf("%d\n", -1 == -1);
	
	_Bool  b = -1;
    printf("%d\n",b);

    _Bool  c = 0;
    printf("%d\n",c);
	*/	
	
	//短路求值
	int a = 3;
	int b = 5;
	
	(a = 1) && (b = 4);
	printf("%d,%d", a, b);
	
}