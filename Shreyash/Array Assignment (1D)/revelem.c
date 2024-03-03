/*3 Write a C program to reverse the element of an integer 1-D array.*/
#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,100};
int temp,i,j,len;
len=sizeof(arr)/sizeof(int);
printf("lendth of arrr %d",len);
printf("Array Elements are---->");
for(i=0;i<len;i++)
{
printf("%d\t",arr[i]);
}
for(i=0,j=len-1;i<j;i++,j--){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}


printf("\nArray Elements after reversing---->\t");
for(i=0;i<len;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}



