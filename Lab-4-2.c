#include <stdio.h>
int main()
{   
    int num;
    do{
        printf("请输入需要的整数个数: ");
        scanf("%d",&num);
        if(num>=50)     //判断数据个数是否少于50
        {
            printf("错误: 输入的数据个数应少于50\n");
        }
    }
    while(num>=50);
    int a[num];
    
    int check;
    int count1;     //用户输入的数据的实际个数
    for(int i=0; i<num; i++)
    {
        printf("请输入第%d个数: ",i+1);
        scanf("%d",&check);
        if (check==-1)
        {
            break;
        }
        while (check<0 || check>4) //检验数据值是否在[0,4]内
        {
            printf("错误: 输入的数据值应在[0,4]内\n请重新输入: ");
            scanf("%d",&check);
        }
        a[i]= check;
        count1++;
    }

    int count2= 0; //储存相同整数的个数
        for(int target = 0;target<=4; target++){
            int count3= 0;
            for(int i=0; i<count1; i++)    
        {   
  
                if(a[i]== target)   count3++;   
        }
                if(count3> 1)       count2+=count3; 
                //若相同的数个数仅为1，则该数没有与其相同的数(关键点)
    } 

    printf("\n数据输入完成！\n");
    printf("同一个整数的个数为%d个\n", count2);
    return 0;
}