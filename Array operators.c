#include<stdio.h>
void inputArray(int*arr,int n);
void displayArray(int*arr,int n);
int sumArray(int*arr,int n);
int countPositive( int*arr,int n);
int countNegative(int*arr,int n);
int main(){
int arr[100];
int n,sum,pos_c,neg_c;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
inputArray(arr,n);
printf("\nArray elements are:");
displayArray(arr,n);
sum=sumArray(arr,n);
printf("\nSum of all elements=%d",sum);
posCount= countPositive(arr,n);
negCount= countNegative(arr,n);
printf("\nNumber of positive elements=%d\n", negCount);
return 0;
}
void inputArray(int*arr,int n){
printf("Enter %d",(arr+i));
}
}
void displayArray(int*arr,int n){
for(int i=0;i<;i++){
    printf("%d",*(arr+i));
    int sumArray(int*arr,int n){
    int sum=0;
    for(int i=0;i<n;i++);
    }
    return sum;
}


