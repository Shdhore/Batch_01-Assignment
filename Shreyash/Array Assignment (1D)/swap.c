/*2 Write a C program to swap first and last element of an integer 1-d array.*/
#include<stdio.h>
void printarr(int i,int len int arr[5]);
int main ()
{ int i,temp,len;
int arr[5]={23,34,344,5,32};
printf("Array before sapping \n");
printarr(i,len,arr[len]);
int len=sizeof(arr)/sizeof(arr[0]);

temp= arr[0];
arr[0]=arr[len-1];
arr[len-1]=temp;
printf("Array after sapping \n");
printarr(i,len,arr[len]);
return 0;}

void printarr(int i,int len,int arr[5]){

for(i=0;i<len;i++){

printf("%d\t",arr[i]);
}
}