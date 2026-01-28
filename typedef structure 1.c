#include<stdio.h>
typedef struct{
int emp_id;
char name[20];
float salary;
}employee;
int main(){
employee e2={1002,"gunda",45000.50};
printf("employee ID.%d\n",e2.emp_id);
printf("Name:%s\n",e2.name);
printf("salary:%2f\n",e2.salary);
return 0;
}
