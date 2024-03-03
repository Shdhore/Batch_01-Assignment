/*WAP for Addition, Subtraction, Multiplication of two matrices*/

#include<stdio.h>
int main(){
int a1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int a2[4][4]={1,9,3,4,5,3,7,8,3,12,19,18,15,54,35,26};

int n,i,j;
int len1=sizeof(a1)/sizeof(a1[0][0]);
int len2=sizeof(a2)/sizeof(a2[0][0]);
printf("Addition for 2 matrix");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		int p=a1[i][j]+a2[i][j];
		printf("%d\t",p);
}}
printf("subtraction for 2 matrix");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		int p=a1[i][j]-a2[i][j];
		printf("%d\t",p);
}}
	
printf("multiplication for 2 matrix");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		int p=a1[i][j]*a2[i][j];
		printf("%d\t",p);
}	}

return 0;
}

