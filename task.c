#include<stdio.h>
#include<string.h>
struct RF{
    char userName[15];
    char userEmail[20];
    char UserPassword[15];
};
struct LF{
     char userName[15];
     char UserPassword[15];
};
int main(){
    struct RF R;
    puts("Registration Form");
    printf("Enter your User_Name: ");
    gets(R.userName);
    printf("Enter your Email: ");
    gets(R.userEmail);
    printf("Enter your Password: ");
    gets(R.UserPassword);

    struct LF L;
     puts("\nLogin Form");
    printf("Enter your User_Name: ");
    gets(L.userName);
    printf("Enter your Password: ");
    gets(L.UserPassword);
    if(strcmp(R.userName,L.userName)==0 && strcmp(R.UserPassword,L.UserPassword)==0)
        printf("login completed ");
    else
        printf("login failed , try again");    

}





