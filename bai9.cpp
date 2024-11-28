#include<stdio.h>
int main(){
	int arr[3][2]={{1,2},{3,2},{7,6}};
	int app =0 ,i,j,l,k;
	int n;
	int maxApp = 0; 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		n=arr[i][j]	;		 
		}
		for(l=0;l<3;l++){
			for(k=0;k<2;k++){
				if (n==arr[l][k]){
				
				app++;} 
			} 
		} 		 
	}
	if(app>maxApp){
		printf("%d",n);		 
	}	 
} 
