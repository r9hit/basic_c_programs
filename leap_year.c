#include<stdio.h>

int main(){
    int year;
    printf("Enter a year to check : \n");
    scanf("%d",&year);
    if (year % 4 == 0 &&  year >=100){
        printf("%d year is a leap year.", year);
    }
    else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}