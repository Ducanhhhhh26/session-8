#include<stdio.h>
int main(){
	int arr[3][3]={{2,6,3},{9,4,8},{10,11,17}};
	int sum = 0;
	int i; 
	for(i=0;i<3;i++){
			printf("%d ",arr[2-i][i]); 
		}	sum+=arr[i][2-i];  
		printf("Tong cua cac duong cheo phu trong mang la %d",sum); 
		return 0;
	}
	
