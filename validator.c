#include<stdio.h>
#include<string.h>
int main()
{
    int a=0, capital=0, num=0, special=0,i;
    char pass[20];
    printf("\nEnter the password: ");
    gets(pass);
    if(strlen(pass)>=5 && strlen(pass)<=10)
    {
        for(i=0; i<strlen(pass); i++)
        {
            if(pass[i]>=65 && pass[i]<=91 || pass[i]>=97 && pass[i]<=122)
                capital++;
            else if(pass[i]>=48 && pass[i]<=57)
                num++;
            else if(pass[i]>=33 && pass[i]<=47 ||pass[i]==64)
                special++;
        }
        if(capital==0 || num==0 || special==0)
        {
            printf("Password not valid");
        }
        else
        {
            printf("Password valid");
            exit(0);
        }
    }
    else
    {
        printf("Password must be between 5-10 characters");
    }
    return (0);
}
