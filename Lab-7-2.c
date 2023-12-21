#include <stdio.h>
#define string_length 100
#define num 3

struct person
{
    char name[string_length];
    int age;
};

int main()
{
    void input_string(struct person s[]);
    struct person oldest(struct person s[]);
    void print_string(struct person s);
    struct person eldest[num], *p= eldest;
    input_string (p);
    print_string (oldest(p));
}

void input_string(struct person s[])
{
    for(int i= 0; i<num; i++)
    {
        printf("请输入第%d个人的名字和年龄: ", i+1);
        scanf("%s %d", &s[i].name, &s[i].age);
    }
}

struct person oldest(struct person s[])
{   int older= 0;
    for (int i=0; i<num-1; i++)
    {
        if(s[i].age<s[i+1].age) older= i+1;
    }
    return (s[older]);
}

void print_string(struct person s)
{
    printf("这%d个人中最年长者是%s, 他的年龄是%d\n", num, s.name, s.age);
}
