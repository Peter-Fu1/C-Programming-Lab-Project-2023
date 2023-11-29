#include <stdio.h> 
int main()
{   
    char c;     //定义c为字符型
    printf("Please enter uppercase:");
    scanf("%c",&c);     //从输入设备读取c的值
        if (c>='A'&& c<='Z')    //判断是否为英文大写字符
        {
        c = c + 32;     //将输入的大写字符转换为对应的小写字符
        printf("Corresponding lowercase is: %c",c);     //是则输出大写字符对应的小写字符
        }
        else printf("Error: Please enter uppercase");   //否则输出错误信息
    return 0;
}