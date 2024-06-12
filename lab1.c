#include<stdio.h>
#include<stdbool.h>

int main(){

    char str[50];
    int i , j , size = 0;
    bool ch ,ch1, sp , digit , res , res1, sp1 = 0;

    
    
    printf("Enter your String :");
    scanf("%s", str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        size++;
    }


    if (size > 6)
    {
        for ( i = 0; i < size; i++)
        {
            if (str[i] >=65 && str[i]<= 90 || str[i] >=97 && str[i]<= 122 )
            {
                ch = 1; 
            }


            if (str[i] >= 48 && str[i] <=57)
            {
                   digit = 1; 
            }

            
            if (str[i] >= 32  && str[i] <=47 || str[i] >= 58  && str[i] <=64 || str[i] >= 91  && str[i] <= 96 ||str[i] >= 123  && str[i] <= 126)
            {
                   sp = 1; 
            }
            
            
        }


        if (ch && digit && sp == 1)
        {   
            for ( i = 0; i < size; i++){

                if (str[0] >= 65 && str[0] <= 90 || str[0] >=97 && str[0] <= 122)
                {
                   res = 1;
                }

                
            
                if (str[i] >= 32  && str[i] <=47 || str[i] >= 58  && str[i] <=64 || str[i] >= 91  && str[i] <= 96 ||str[i] >= 123  && str[i] <= 126)
                {
                   sp1 = 1; 
                }

                

                if (str[size - 1] >= 48 && str[size - 1] <= 57)
                {
                   res1 = 1;
                }
                
                
            }

            if (res && res1 && sp1== 1 )
            {
                printf("Password valid");
            }
            else
            {
                printf("Password Invalid try again");
            }
            

        }

        else{

            printf("Password Invalid try again");
        }
        
        
    }

    else{

            printf("Password Invalid try again");
        }
    


    return 0;

}