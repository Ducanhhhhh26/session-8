#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n; 
     
    int i, j; 
	int count=0; 
    printf("Moi ban nhap gia tri can tim: ");
    scanf("%d", &n);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (n == arr[i][j]) {
                printf("Vi tri cua phan tu trong mang la arr[%d][%d]\n", i, j);
                count ++; 
            }
        }
    }
    
    if (count==0) {
        printf("Phan tu khong ton tai trong mang\n");
    }

    return 0;
}

