/* Write a C program to find the sum and average of one dimensional integer array.*/
#include<stdio.h>
int main()
{
int arr[]={11,33,45,66,32,222,33,6,7,4};
int len=sizeof(arr)/sizeof(int);
int sum=0;
int avg;
for(int i=0;i<len;i++){
sum=sum+arr[i];
}
avg=sum/10;
printf("Sum of array is ---->%d\nAverage of array is----->%d\nlength of array is %d",sum,avg,len);
return 0;
}