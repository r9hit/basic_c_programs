#include<stdio.h>
#include<string.h>

int slice( char *ptr,int m, int n){
   int i=0;
   while((i+m)<n){
    ptr[i] =ptr[i+m];
    i++;
    } 
    ptr[i] = '\0';


}
int main(){
    int a,b;
    char ptr[40];
    printf("Enter a string : \n");
    gets(ptr);
    // scanf("%s",ptr); --> will not accept string after one white space
    printf("Enter starting point to slice the string : \n");
    scanf("%d",&a);
    printf("Enter ending point to slice the string : \n");
    scanf("%d",&b);
    
    // function for slicing the string
    slice(ptr,a,b);
    printf("%s",ptr);
    return 0;

}