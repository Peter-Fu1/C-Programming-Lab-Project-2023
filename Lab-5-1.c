#include <stdio.h>
int max_factor(int a, int b);
int min_mulitple(int a, int b);
int main()
{
    int a,b;
    do
    {
    printf("请输入两个整数(由大到小输入, 用空格隔开): ");
    scanf ("%d %d",&a,&b);
    if (a<b)
        {
        printf("请以由大到小的顺序输入\n");
        }
    }
    while (b>a);
    printf("这两个数的最大公约数是%d, 最小公倍数是%d",max_factor(a,b), min_mulitple(a,b));
}

int max_factor(int a, int b)
{
    int result;
    int remainder= a % b;
    int test;
    if (remainder == 0) result = b; 
    else 
    {
        do
        {
            test = remainder;
            remainder = b%remainder;
        }
        while (remainder!= 0);
        result = test;
    }
    return (result);
}

int min_mulitple(int a, int b)
{   
    int x = max_factor(a,b);
    int result = a*b/x;
    return (result);
}