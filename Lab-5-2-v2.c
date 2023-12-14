#include <stdio.h>
void combine(char string1[], char string2[]);
char* input_string(char string[]);
const int string_length= 100;
int main()
{
    char s1[string_length],s2[string_length];   //以字符数组的形式定义字符串
    int i= 0;
    printf("请输入第一个字符串:");
    input_string(s1);
    printf("第一个字符串是: %s\n", s1);

    printf("请输入第二个字符串:");
    input_string(s2);
    printf("第二个字符串是: %s\n", s2);

    combine(s1,s2); //调用合并字符串的函数
    return 0;
}
char* input_string(char string[])
{   int i;
    for(i= 0; i<string_length; i++)
    {
        scanf("%c",&string[i]);
        if(string[i]== '\n') break; //输入回车时停止循环
    }
    string[i] = '\0';
    return (string);
}

void combine(char string1[], char string2[])
{
    int i= 0;
    char string3[string_length];
    for(i=0; string1[i]!= '\0'; i++);
    for(int j=0; string2[j]!= '\0'; j++)
    {
        string1[i++]=string2[j];
    }
    string1[i]= '\0';
    printf("合并后的字符串为:%s\n",string1);
}