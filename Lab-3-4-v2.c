#include <stdio.h>
#define TOPLIMIT 5 //原密码输入错误次数上限
int main()
{
    int judge(char choice);
    int psw=123456;
    int temppsw,newpsw,confirmedpsw;
    int i=TOPLIMIT;
    char operation;
    printf("————————————密码修改功能——————————\n");
    do
    {
        printf("请输入原密码：");
        scanf("%d", &temppsw);
        if(psw!=temppsw)
        {
            i--;
            if(i<=0)
            {
                printf("修改密码次数达到上限：");
                break;
            }
            do{
                printf("原密码输入有误，还有%d次输入密码的机会。\n",i);
                printf("是否再次尝试输入原密码?(Y/N)");
                setbuf(stdin,NULL);  //清空输入缓冲区
                operation = getchar();
            } while (judge(operation) == 2);
            if(judge(operation) == 0) {
                break;
            }
        }
        else
        {
            printf("请输入新密码: ");
            scanf("%d",&newpsw);
            if (newpsw==psw){
                printf("新密码不可与原密码相同！\n");   
            }
            else {
            printf("请输入确认密码：");
            scanf("%d",&confirmedpsw);
            if(newpsw==confirmedpsw)
            {
                psw=newpsw;
                printf("修改密码成功！\n");
                break;
            }
            else
            {
                printf("修改密码失败！\n");
            }
            }
        }
    }while(i>0);
    return 0; 
}

int judge(char choice){
    int ret;
    if(choice=='Y' || choice=='y')
                ret = 1;
            else
                if(choice=='N' || choice== 'n'){
                    ret= 0;
                }

            else{
                printf("您的输入有误，请重新输入！\n");
                ret= 2;
            }  
    return ret;
}
//定义了一个judge判断函数, 用于判断用户在选择是否再次尝试输入密码时,
//输入小写字母时也能被正确识别,
//以及在输入了其他字符时提示用户重新输入选择。