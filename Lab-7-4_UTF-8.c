#include <stdio.h>
#define string_length 100
#define quantity 4
struct book 
{
    int num;
    char name[string_length];
    double price;
} book1[quantity];

int main()
{
    int i = 0;  int j = 0;
    for(i = 0; i<quantity; i++)
    {
        printf("请输入第%d本书的书号: ", i+1);
        scanf ("%d", &book1[i].num);
        
        printf ("请输入第%d本书的书名: ", i+1);
        scanf ("%s", book1[i].name);
        //for (j = 0; book1[i].name[j] != '\n', j++){
        //    scanf ("%c", &book1[i].name[j]);}      
        printf ("请输入第%d本书的价格: ", i+1);
        scanf ("%lf", &book1[i].price);
    }
        /* for(i = 0; i<quantity; i++)
        {
        printf("%d %s %lf\n", book1[i].num, book1[i].name, book1[i].price);
        } */

        FILE *bi;
        bi = fopen ("D:\\Documents\\GCU\\C Programming\\Lab\\8\\Book_Information_1.txt", "w");
        for(i = 0; i<quantity; i++)
        {
            //fwrite (&book1[i],sizeof(struct book),3, bi);
            fprintf(bi,"%d %s %.2lf\n", book1[i].num, book1[i].name, book1[i].price);
        }
        fclose (bi);
        return 0;
}

