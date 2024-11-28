#include<stdio.h>
int main(){
	int arr[3][3]={{3,2,3},{4,5,6},{7,8,9}};
	int i; 
	int sum =0; 
	for(int i =0;i<3;i++){
	 
		printf("%d ",arr[0][i]); 
		sum+=arr[0][i]; 
	}
		printf("\nTong cua tat cac so o bien tren cung la %d\n",sum); 
		sum=0; 
	for(int i=0;i<3;i++){
 
		printf("%d ",arr[2][i]); 
		sum+=arr[2][i]; 
	}
		printf("\n Tong cua tat cac so o bien duoi cung la %d\n",sum); 
		sum =0; 
	for(int i=0;i<3;i++){
 
		printf("%d ",arr[i][0]); 
		sum+=arr[i][0]; 
	}
		printf("\n Tong cua tat cac so o bien trai la %d\n",sum); 
		sum =0; 
	for(int i=0;i<3;i++){
 
		printf("%d ",arr[i][2]); 
		sum+=arr[i][2]; 
	}
		printf("\n Tong cua tat cac so o bien trai la %d\n",sum); 
		sum =0; 
	
		


	
	return 0; 
} 
