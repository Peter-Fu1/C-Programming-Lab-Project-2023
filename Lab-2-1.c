#include <stdio.h> 
int main()
{   
    char c;
    printf ("Please enter lowercase:");
    scanf("%c",&c);          //从输入设备读取字符
        if (c>='a'&& c<='z') //判断是否为小写英文字符
        {
        c = c + 5;           //是则使小写字符输出后移5个
        printf("Results of five position after this character is: %c",c);
        }
        else printf ("Error: Please enter lowercase");  //否则输出错误提示
    return 0;
}