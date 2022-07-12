#include<stdio.h>
#include<stdlib.h>
int mystrcmp(char *, char *);
int main(int argc, char **argv)
{
 
    char user[30];
    char pass[30];
    int try = 1;
 
    do{
        printf("Insert username: ");
        scanf("%s",user);
        printf("Insert password: ");
        scanf("%s",pass);
        int res = mystrcmp(user,"Namo");
        int res2 = mystrcmp(pass,"user");
        if(res==0){
            if(res2==0){
                printf("Welcome!");
                exit(1);
            }
        }
      else
      {
            printf("the username or password is wrong try again\n");
            try++;
        }
 
    }while(try<=3);
    printf("Sorry you have only 3 tries!");
 
    return 0;
}
 
int mystrcmp(char *str1, char *str2)
{
    int res;
    res=strcmp(str1, str2);
    if(res==0)
        return 0;
    else
        return 1;
}
