#include <stdio.h>
unsigned int powersOf2(int x);
int main()
{
    int n;
    printf("请输入自然数n以求取2的n次方: ");
    scanf("%d",&n);
    printf("2的%d次方的结果是%d\n", n, powersOf2(n));
}

unsigned int powersOf2(int x)
{
    unsigned int result= 1;
    for (int i=0; i<x; i++)
    {
        result *= 2;
    }
    return (result);
}