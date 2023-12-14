#include <stdio.h>
void combine(char string1[], char string2[]);
int main()
{
    char s1[100],s2[100];   //以字符数组的形式定义字符串
    int i= 0;
    printf("请输入第一个字符串:");
    for(i= 0; i<100; i++)
    {
        scanf("%c",&s1[i]);
        if(s1[i]== '\n') break; //输入回车时停止循环
    }
    s1[i] = '\0';
    printf("第一个字符串是: %s\n", s1);

    printf("请输入第二个字符串:");
    for(i= 0; i<100; i++)
    {
        scanf("%c",&s2[i]);
        if(s2[i]== '\n') break;
    }
    s2[i] = '\0';
    printf("第二个字符串是: %s\n", s2);
   
    combine(s1,s2); //调用合并字符串的函数
    return 0;
}

void combine(char string1[100], char string2[100])
{
    int i= 0;
    char string3[100];
    for(i=0; string1[i]!= '\0'; i++);
    for(int j=0; string2[j]!= '\0'; j++)
    {
        string1[i++]=string2[j];
    }
    string1[i]= '\0';
    printf("合并后的字符串为:%s\n",string1);
}