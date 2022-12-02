#include <stdio.h>

struct Test
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
} test;

struct Test1
{
    unsigned int a:1;
    unsigned int b:1;
    unsigned int c:32;
} test1;

struct Wumin
{
    unsigned int x:1;
    unsigned int y:2;
    unsigned int z:3;
    unsigned int  :27;
};

int main()
{
    test.a = 0;
    test.b = 1;
    test.c = 2;
    test1.a = 0;
    test1.b = 1;
    test1.c = 2;
    
    printf("a = %u,b = %u, c = %u\n",test.a, test.b, test.c);
    printf("size = %lu\n", sizeof(test));
    printf("a = %u,b = %u, c = %u\n",test1.a, test1.b, test1.c);
    printf("size = %lu\n", sizeof(test1));
}

/* 
单片机（Microcontrollers）是一种集成电路芯片，是采用超大规模集成电路计数把
具有数据处理能力的中央处理器CPU 、随机存储器RAM、只读存储器ROM、多种I/O口和
中断系统、定时器/计数器等功能（可能还包括显示驱动电路、脉宽调制电路、模拟多路转换器、
A/D转换器等电路）集成到一块硅片上构成的一个小而完善的微型计算机系统，在工业控制领域
广泛应用。
*/
