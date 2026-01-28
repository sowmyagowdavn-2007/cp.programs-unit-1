#include<stdio.h>
struct car
{
    char name[20];
    char model[20];
    int price;
    int cc;
    int day,month,year;
};
int main()
{
    struct car c;
    printf("Enter car name:");
    scanf("%s",c.name);
    printf("Enter car model:");
    scanf"%s",c.model);
    printf("Enter price:");
    scanf("%d",&c.price);
    printf("Enter cc:");
    scanf("%d",&c.cc);
    printf("Enter manufacturing date(11 06 2007):");
    scanf("%d%d%d",&c.day,&c.month,&c.year);
    printf("\n---car details---\n");
    printf("Name:%s\n",c.name);
    printf("Model:%s\n",c.model);
    printf("price:%d\n",c.price);
    printf("cc:%d\n",c.cc);
    printf("Date:%d-%d-%d\n",c.day,c.month,c.year);
    return 0;
}

