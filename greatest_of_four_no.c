#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter first no \n");
    scanf("%d", &num1);
    printf("Enter second no \n");
    scanf("%d", &num2);
    printf("Enter third no\n");
    scanf("%d", &num3);
    printf("Enter fourth no\n");
    scanf("%d", &num4);
    if(num1 > num2 && num1>num3 && num1> num4){
        printf("%d is the greatest in given numbers",num1);
       
    }
    else if (num2> num1 && num2>num3 && num2>num4){
        printf("%d is the greatest in given numbers",num2);
       
    }   
    else if (num3>num1 && num3>num2 && num3>num4) {
        printf("%d is the greatest in given numbers",num3);
        
    }
    else {
        printf("%d is the greatest in given numbers",num4);
    }
    
    return 0;
}