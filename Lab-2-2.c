#include <stdio.h>
#include <math.h>
#define PI 3.141596     //定义符号常量π
int main()
{   
float radius,height;    //定义半径，高度为单精度浮点型
    printf("Please enter radius of cylinder: ");
    scanf ("%f",&radius);
    printf("Please enter height of cylinder: ");
    scanf ("%f",&height);
    //从输入设备获取半径和高度
float circumference,square,volumn;  //定义周长、面积和体积为单精度浮点型
    circumference=2*PI*radius;
    square=PI*pow(radius,2);
    volumn=square*height;   //用特定数学公式和半径、高度的数据求得周长、面积和体积的值
    printf("Circumference:%-.2f,Area:%-.2f,Volumn:%-.2f",circumference,square,volumn);
        //以两位小数的形式输出周长、面积、体积的值
return 0;
}
