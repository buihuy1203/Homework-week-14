#include <stdio.h>

double *max(double *a, int k ){
	double b = *a;
	for(int i = 0; i< k; i++){
		if(*(a+i) > b){
			b = *(a+i);
		}
	}
	double *rs = &b;
	return rs;
}

int main(){
	printf("Bai 2: \n");
	int n;
	do{
		printf("Nhap so phan tu mang: ");
		scanf("%d",&n);
	}while(n > 10 || n < 0);
	double arr[10];
	printf("Nhap cac phan tu mang: ");
	for(int i = 0; i < n;i++){
		scanf("%lf",&arr[i]);
	}
	double *res;
	res = max(arr, n);
	printf("Phan tu lon nhat trong mang: %lf ", *res);
}
