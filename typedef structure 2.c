#include<stdio.h>
typedef struct{
int emp_id;
char name[20];
float salary;
}employee;
int main(){
employee e3={1003,"sowmya",50000.50};
printf("employee ID.%d\n",e3.emp_id);
printf("Name:%s\n",e3.name);
printf("salary:%2f\n",e3.salary);
return 0;
}
