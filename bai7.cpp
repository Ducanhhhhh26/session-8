#include<stdio.h>
int main(){
	int arr[3][3]={{5,7,3},{4,9,6},{7,11,9}};
	int sum = 0;
	int i; 
	for(int i = 0;i<3;i++){
		printf("%d",arr[i][i]);
		sum+=arr[i][i]; 
	}
	
	printf("\nTong cua cac so trong duong cheo chinh la %d",sum); 
		 return 0; 
} 
