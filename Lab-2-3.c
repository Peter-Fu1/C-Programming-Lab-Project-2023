#include <stdio.h>
#include <math.h> 
int main()
{   
    int num1,num2;  //定义num1, num2为整型
        printf("Please enter two integer:");
        scanf("%d,%d",&num1,&num2);     //从输入设备获取两个整数的值
    float quotient,rasidue;     //定义商、余数为单精度浮点型
        quotient=round(((float)num1/num2)*100)/100;    //以四舍五入形式输出两位小数的商的值
        rasidue=num1%num2;
        printf("Quotient:%-.2f\n",quotient);
        printf("Rasidue:%-.2f\n",rasidue);      //输出商和余数的值
    return 0;
}