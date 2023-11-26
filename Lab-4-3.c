#include <stdio.h>
int main()
{
    int num;
    do{
        printf("请输入学生人数: ");
        scanf("%d",&num);
        if(num>50 || num<=0)     //判断学生人数是否少于50
        {
            printf("错误: 输入的学生人数应少于50且大于0\n");
        }
    }
    while(num>50 || num<=0);
    int students_score[num];
    
    int check;
    int sum;
    for(int i=0; i<num; i++)
    {
        printf("请输入第%d个学生的分数: ",i+1);
        scanf("%d",&check);
        while (check<0 || check>100) //检验分数是否在[0,100]内
        {
            printf("错误: 输入的分数应在[0,100]内\n请重新输入: ");
            scanf("%d",&check);
        }
        students_score[i]= check;
        sum+= students_score[i];
    }
    int average = sum/num;
    int count= 0;
           for(int i= 0; i<num; i++)
        {
            if(students_score[i]>average)
            {
                count++;
            }

        }   
    printf("这%d个学生的平均成绩为%d, 分数高于平均分的人数是%d\n", num, average, count);
    
    return 0;
}

