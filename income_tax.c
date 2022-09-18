#include <stdio.h>

int main()
{
    float tax, income;
    printf("Enter your annual income =\n");
    scanf("%f", &income);
    if (income <= 250000)
    {
        printf("you are not eligible");
    }
    if (income >= 250000 && income <= 500000)
    { 
        tax = ((income -250000)*5)/ 100;
        printf("You have to pay a total amount of %.2f", tax);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + ((income-500000)*20)/ 100;
        printf("You have to pay a total amount of %.2f", tax);
    }
     if ( income >= 1000000)
    {
        tax = tax + ((income-1000000)*30)/ 100;
        printf("You have to pay a total amount of %.2f", tax);
    }

    return 0;
}