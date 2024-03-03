
/*Write a menu driven C program with following option 
a. Accept elements of an array 
b. Display elements of an array
c. Sort the array using insertion sort method 
d Sort the array using selection sort method 
e.Sort the array using bubble sort method Write C functions for all options.
The function
s.should have two parameters name of the array and number of elements in the array*/

#include<stdio.h>
void display(int l,int arr[10]){
	for(int 1=0;i<l;i++){
		printf("%d\t",arr[i]);
	}
}
int main{
int i,len,choise;
arr[10];
printf("Enter the Elements of an Array\n"); //a. Accept elements of an array 
for(i=0;i<10;i++)
{
	scanf("%d",&arr[i]);
}
len=sizeof(arr)/sizeof(int);
printf("The Elements of array are -->\t");
display(len,arr);
printf("chose below selections 1->Sort the array using insertion sort method\n2->Sort the array using selection sort method\n3->Sort the array using bubble sort method");
scanf("%d",&choise)
switch(choise){
	case 1:
	insertion_sort(len,arr[10]);
	break;
	case 2:
	selection_sort(len,arr[10]);
	break;
	case 3:
	Bubble_sort(len,arr[10]);
	break;
	default:
	Printf("Wrong choise");
}
return 0;}

