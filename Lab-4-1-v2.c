#include <stdio.h>
int main()
{
    int row, column;
    printf ("请输入二维数组的行序号和列序号 (中间以空格隔开): ");
    scanf ("%d %d", &row, &column);
    int a[row][column];
    //提示用户需要输出的二维数组的格式

    for(int i=0;i<row;i++)
    {
        for(int j=0; j<column;j++){
            printf("请输入第%d行第%d列的元素: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    //提示用户逐个输入二维数组的元素

     printf("输入的二维数组是:\n");

     for(int i=0;i<row;i++)
    {
        for(int j=0; j<column; j++){
            printf("%d%c", a[i][j], ' ');
        }
        printf("\n");
    }
    //按照给定的格式逐个输出二维数组中的元素

    return 0;
}
