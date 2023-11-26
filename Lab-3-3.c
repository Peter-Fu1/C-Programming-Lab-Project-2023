#include <stdio.h>
#include <math.h>
int main(){
    int num=1;
    int sum=0;
    while(num<=10){
        sum=sum+pow(num,2);
        num++;
    }
    printf("sum= %d\n",sum);
return 0;
}