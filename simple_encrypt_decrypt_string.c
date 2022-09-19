#include<stdio.h>
void encrypt(char *str){
    int i=0;
    char *str1 = str;
    while(*str1 !='\0'){
        *str1 = *str1 +4;
        str1++;
        }
    
 
}
 void decrypt(char *str){
    char *str2 = str;
    while(*str2 != '\0'){
        *str2 = *str2-4;
        *str2++;
    }
 }

int main(){
    char str[50];
    printf("enter a string :");
    gets(str);
    encrypt(str);
    printf("Encrypted string :");
    puts(str); 
    decrypt(str);
    printf("decrypted string :");
    puts(str);
    return 0;
}