#include<stdio.h>
int main (){
	int n;
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i = 0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu trong hang %d va cot %d:",i+1,j+1);
			scanf("%d",&arr[i][j]);			 
	} 
			}

 	printf("Gia tri cua tung gia tri trong mang la:\n"); 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" %d ",arr[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0;
}
