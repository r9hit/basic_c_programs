#include<stdio.h>

void count(char *str, char c){
    int i=0, count=0;
    char *string = str;
    while(*string != '\0'){
        if(*string == c){
            count++;
        }
        *string++;

    }
    printf("%d",count);

}

int main(){
    char c,str[50];
    printf("enter a string : ");
    gets(str);
    printf("enter a character to count its occurance : ");
    scanf("%c",&c);
    count(str,c);
    
    return 0;
}