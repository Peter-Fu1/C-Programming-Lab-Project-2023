#include <stdio.h>          //主函数
int main()                  //定义主函数
{
    int sum (int x, int y); //对被调用的sum函数的声明
    int a,b,c;              //定义变量a,b,c
    printf("Please enter two numbers:");   
    scanf("%d,%d",&a,&b);   //利用“%”占位,将输入的值插入占位中,随后放到变量a,b的地址,再赋给变量a,b
    c=sum(a,b);             //调用sum函数,将a,b在函数sum中的结果赋给c
    printf("sum=%d\n",c);   //输出c的值
    return 0;               //返回主函数的值为0
}
    int sum(int x,int y)
    {
        int result;
        result = x+y;
        return(result);
    }