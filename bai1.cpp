#include<stdio.h>
int main(){
	int arr[2][2]={{1,2},{4,5}};
	for(int i=1;i>=0;i--){
		for(int j=1;j>=0;j--){
			printf("gia tri cua phan tu thu o hang %d va cot %d la %d",i+1,j+1,arr[i][j]); 
			printf("\n"); 
		} 
	} 
	return 0; 
} 
