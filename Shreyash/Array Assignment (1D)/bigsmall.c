/*WAP to Addition of two arrays*/
#include<stdio.h>
int main()
{
int arr[]={0,22,33,43,0,88,75,855,115};
int i,big,small;
int len=sizeof(arr)/sizeof(arr[0]);
//printf("Enter a 10 numbers as input");
//for(i=0;i<10;i++){
//scanf("%d",&arr[i]);
//}
printf("Array Elements -->");
for(i=0;i<len-1;i++){
printf("%d\t",arr[i]);
}
big=small=arr[0];
for(i=1;i<9;i++){
big=big<arr[i]?arr[i]:big;
small=small>arr[i]?arr[i]:small;
}
printf("\nlargest number->%d\nsmallest number------->%d",big,small);

return 0;
}