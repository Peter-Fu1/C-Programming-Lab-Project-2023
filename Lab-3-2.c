#include <stdio.h>
#include <math.h>
int main(){
    int digit[3];
    int attempt_num =100;
    int position=0;
    int divisor=1;
    int count= 1;   
        while(attempt_num>=100 && attempt_num<=999)
        {
            divisor=1;
            position=0;
            
            while(position<=2) 
            {       digit[position]= (attempt_num/divisor)%10;
                    divisor*=10;
                    position++;
            }
            if(attempt_num== pow(digit[0],3)+ pow(digit[1],3)+pow(digit[2],3))   
            //注意赋值符号和等于关系运算符的区分
            {
                printf("第%d个水仙花数是%d\n",count,attempt_num);
                count++;
            }
            attempt_num++;             
        }              
return 0;
}