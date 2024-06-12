#include<stdio.h>
#include<string.h>


int main(){

char str[50];
char str1[50];

char str2[50];
char str3[50];

printf("Enter your Email :");
scanf("%s", &str2);
printf("\n");

printf("Enter the password :");
scanf("%s", &str);
printf("\n");

printf("Confirm your Email :");
scanf("%s", &str3);
printf("\n");

printf("confirm your password :");
scanf("%s", &str1);
printf("\n");



 int res= strcmp(str, str1);
 int res1 = strcmp(str2,str3);

 if (res == 0 && res1 == 0)
 {
   printf("Login Successfully ");
 }
 
else
 {

  printf("Invalid Password try again");
 }
 

return 0;
    
}