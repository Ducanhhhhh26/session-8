#include<stdio.h>
int main(){
	int arr[2][2]={{1,10},{5,6}};
	int max = arr[0][0]; 
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(arr[i][j]>max){
				max = arr[i][j]; 
			} 
		} 
	} 
	printf("Gia tri lon nhat la %d",max);
	return 0; 
} 
