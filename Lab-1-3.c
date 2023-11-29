#include <stdio.h>          //主函数
int main()                  //定义主函数
{
    int max (int x, int y); //对被调用的max函数的声明
    int a,b,c;              //定义变量a,b,c
    printf("Please enter two numbers:");   
    scanf("%d,%d",&a,&b);   //利用“%”占位,将输入的值插入占位中,随后放到变量a,b的地址,再赋给变量a,b
    c=max(a,b);             //调用max函数,将a,b在函数max中的结果赋给c
    printf("max=%d\n",c);   //输出c的值
    return 0;               //返回主函数的值为0
}
    //定义求两者中最大值的函数max
    int max(int x,int y)    //定义max函数,函数值为整型,形式参数x,y为整型
    {                       
        int z;              //max函数中的声明部分,定义本函数中用到的变量z为整型
        if (x>y) z=x;       //若x>y,则将x的值赋给变量z
        else z=y;           //否则(即y>x)将y的值赋给变量z
        return(z);          //将z的值作为 max的函数值 ,返回到调用max函数处
    }
