#include <stdio.h>
int main()
{
    int positive_integer;
    int inverse_positive_integer=0;
    int position=0;
    int divisor;
    int digit[5];
    int i=0;
    int caculator;
    
    do
    {
    printf("Please enter a positive integer less or equal 5 digit:");
    scanf("%d",&positive_integer);
     if(positive_integer<=0 || positive_integer>100000)
     {
        printf("Error: Please enter again\n");
     }
    } while (positive_integer<=0 || positive_integer>100000);     //judge if digit<5
        
/*(1)*/     caculator= positive_integer;     
            while(caculator!=0)
            {    //令输入的数不断➗10，则需要 进行10整除使运算之后的值为0 的次数 代表 该正整数的位数
                caculator/=10;
                i++;
            }
                printf("Digit of this positive integer is:%d\n", i);   
                //Checked

/*(2)*/     divisor= 1;        //其中 divisor=1需要放在第二个 while 循环之前, 以便令除数只初始化1次。
            while(position<i) 
            {  //从右到左依次读取各个位数的值，则需要依次从10的0次方开始对该正整数进行整除，再依次进行10的取模运算。
               //该正整数有多少位就进行几次运算。123

                    digit[position]= (positive_integer/divisor)%10;
                    printf("Digit at position %d is :%d\n", position+1,digit[position]);
                    divisor*=10;
                    position++;
            }   //Checked
            
/*(3)*/     
            position= i-1;   //使程序只读取输入的数的有效位
            divisor=1;
            caculator=1;
            while(position>= 0)
            { 
                inverse_positive_integer+= (digit[position] * caculator);
                position --;
                caculator*=10;                        
            }                    
            printf("The inverse positive integer is:%d\n",inverse_positive_integer);
            //Checked
            
            return 0;
        } 
      

        
         
