#include<stdio.h>
int main()
{
    int a,b,c;
    int sum,average;
    printf("Enter any 3 integers");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    average = sum/3;
    printf("sum and average of 3 integers:%d %d",sum,average);
    return 0;
}
