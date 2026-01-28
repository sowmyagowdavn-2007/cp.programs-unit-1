#include<stdio.h>
struct Employee{
int id;
char name[50];
float salary;
};
int main(){
struct Employee emp[5];
int i;
float sum=0,avg;
printf("enter details of 5 employee:\n");
for(i=0;i<5;i++){
    printf("\nEmployee %d\n",i+1);
    printf("enter Employee ID:");
    scanf("%d",&emp[i].id);
    printf("enter Name:");
    scanf("%s",emp[i].name);
    printf("enter salary:");
    scanf("%f",&emp[i].salary);
    sum+=emp[i].salary;
}
avg=sum/5;
printf("\n____Employee details___\n");
for(i=0;i<5;i++){
    printf("\nEmployee %d\n",i+1);
    printf("\ID: %d\n",emp[i].id);
    printf("Name:%s\n",emp[i].name);
    printf("salary:%2f\n",emp[i].salary);
}
printf("\nAverage salary of 5 Employee=%2f\n",avg);
return 0;
}
