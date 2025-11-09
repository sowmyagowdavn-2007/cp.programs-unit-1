#include<stdio.h>
void inputArray(int*arr,int n);
void displayArray(const int*arr,int n);
int sumArray(const int*arr,int n);
int countPositive(const int*arr,int n);
int countNegative(const int*arr,int n);
int main(void){
int arr[100];
int n,sum,poscount,negcount;
printf("Enter the number of elements in the array(max 100):");
if(scanf("%d",&n)!=1||n<0||n>100)
    {
        puts("Invalid size.");
        return 1;
    }

    printf("\nArray elements are:");
displayArray(arr,n);
sum=sumArray(arr,n);
printf("\nsum of all elements=%d",sum);
poscount=countPositive(arr,n);
negcount=countNegative(arr,n);
printf("\n Number of positive elements=%d",poscount);
printf("\n number of negative elements=%d\n",negcount);
return 0;
}
void inputArray(int*arr,int n){printf("Enter%d elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",arr+i);
}
}
void displayArray(const int*arr,int n){
for(int i=0;i<n;i++){
    printf("%d",*(arr+i));
}
}
int SumArray(int*arr,int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=*(arr+i);
}
return sum;
}
int countPositive(const int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
    if(*(arr+i)>0)cnt++;
}
return cnt;
}
int countNegative(const int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
    if(*(arr+i)>0)cnt++;
}
return cnt;
}
