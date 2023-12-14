#include <stdio.h>
double checkCal(int x, int product_quality[]);
int main()
{
    int n;
    printf("请输入待测产品数目: ");
    scanf ("%d", &n);
    int product_quality[n];
    int quality;
    for (int i=0; i<n; i++)
    {
        do
        {
            printf("第%d件产品是否合格? (输入1代表合格, 0代表不合格)",i+1);
            scanf("%d", &quality);
            if(quality!=1 && quality!=0)
            {
                printf("输入错误，请重新输入！\n"); 
            }
        }
        while(quality!=1 && quality!=0);
        product_quality[i]=quality;
    }
    /*for (int i=0; i<n; i++)
    {
        printf("%d%c", product_quality[i], ' ');
    }
        输出产品是否合格的结果 */

    printf("该批产品的合格率为:%lf%c\n", checkCal(n,product_quality)*100,'%');
    return 0;
}

double checkCal(int x,int product_quality[])    //注意函数类型
{   int count= 0;
    for(int i=0; i<x; i++)
    {
        if (product_quality[i]==1)
        {
            count++;
        }
    }
    double ratio = (double)count / x;   //注意类型
    return (ratio);
}