#include <stdio.h>

int *daonguoc(int *a, int k){
	for(int i = 0; i < k/2;i++){
		int temp = *(a+i);
		*(a+i)=*(a+(k-i-1));
		*(a+(k-i-1))= temp;
	}
	return a;
}

int main(){
	printf("Bai 3: \n");
	int arr[1000];
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	printf("Nhap mang so nguyen: ");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	int *p;
	p = daonguoc(arr,n);
	printf("Mang da dao nguoc: ");
	for(int i = 0;i < n;i++){
		printf("%d ", *(p+i) );
	}
}
