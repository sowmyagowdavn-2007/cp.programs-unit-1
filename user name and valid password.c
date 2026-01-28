#include <stdio.h>
#include<string.h>
int main(){
char user[20],pass[20];
printf("user name:");
scanf("%s", user);
printf("password:");
scanf("%s",pass);
if (strcmp('pass',"Admin123")==0&&strlen(Pass)>=8)
    printf("success! welcome,%s\n",user);
    else
        printf("invalid password.\n");
    return 0;
}
