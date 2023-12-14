#include <stdio.h>
char* input_string(char string[]);
void combine(char string1[], char string2[]);
void caculate(char string3[]);
// int count();
const int row_length= 10;
const int article_length= 30;
int main()
{
    char s1[row_length],s2[row_length],s3[row_length],article[article_length];   
    //以字符数组的形式定义字符串
    int i= 0;
    printf("请输入第一行文字:");
    input_string(s1);   //输入第1行文字

    printf("请输入第二行文字:");
    input_string(s2);   //输入第2行文字

    printf("请输入第三行文字:");
    input_string(s3);   //输入第3行文字

    printf("这篇文章的内容是: \n%s\n%s\n%s\n", s1, s2, s3);
   
    combine(article, s1);
    combine(article, s2);
    combine(article, s3);

    printf("这篇文章的内容是: \n%s\n" ,article);

    caculate(article);

    return 0;
}

char* input_string(char string[])
{   int i;
    for(i= 0; i<11; i++)    //回车算不算进去题目要求的10个字符内？
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
    char string3[100];
    for(i=0; string1[i]!= '\0'; i++);
    for(int j=0; string2[j]!= '\0'; j++)
    {
        string1[i++]=string2[j];
    }
    string1[i]= '\0';
   // printf("合并后的字符串为:%s\n",string1);
}

void caculate(char string3[])
{
    int i;
    int count1,count2,count3,count4;
    int count5=count1=count2=count3=count4= 0;  
    //特定时候 需要定义为0 否则会出现预料外的数字 如count5这样的情况

    for (i=0;i<article_length;i++)  //大写字母
    {
        if (string3[i]<=90 && string3[i]>=65)
        {
            count1++;
        }
        else if (string3[i]<=122 && string3[i]>=97)
        {
            count2++;
        }
        else if (string3[i]<=57 && string3[i]>=48)
        {
            count3++;
        }
        else if (string3[i]== ' ')
        {
            count4++;
        }
        else
        {
            count5++;
        }
    }
    printf("大写字母的数量：%d\n", count1);
    printf("小写字母的数量：%d\n", count2);
    printf("数字的数量：%d\n", count3);
    printf("空格的数量：%d\n", count4);
    printf("其他字符的数量：%d\n", count5);
}
