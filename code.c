/*C mini calc by Hemal*/
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a , b ;                    // assigning the value to variable in int 
    int sum,sub,mul,mod;
    float div;
    
    printf("Mini calc by meda Hemal\n");
    printf("Enter two numbers separated by comma (,) :");
    scanf("%d,%d",&a,&b);
    printf("you Entered:%d,%d\n",a,b);
    sum=a+b;                        //telling what to do 
    sub=a-b;
    mul=a*b;
    mod=a%b;
    div=(float)a/b;
    
    printf("Addition:%d\n",sum);                   //printing answer
    printf("Subtraction:%d\n",sub);
    printf("Multiplication:%d\n",mul);
    printf("Divivson%f\n",div);
    printf("MODULAS:%d\n",mod);
    printf("Thank you for using Mini calc\n");
    printf("By meda Hemal\n");
    printf("Did you like it rate it out of 5 stars:");
    scanf("%d,%d",&a,&b);
    printf("Thanks for using mini calc");
    return 0 ;
    
}
