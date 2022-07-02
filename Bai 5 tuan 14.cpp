#include <stdio.h>
#include <string.h>

int main(){
	printf("Bai 5: \n");
	char a[10000];
	printf("Nhap xau can thay doi: ");
	fflush(stdin);
	gets(a);
	for(int i = 0; i< strlen(a);i++){
		if(a[i] =='1'){
			a[i]= 'm';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'o';
			a[i+2]= 't';
			i+=2;
		}
		if(a[i]=='2'){
			a[i]= 'h';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'a';
			a[i+2]= 'i';
			i+=2;
		}
		if(a[i]=='3'){
			a[i]= 'b';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+1] = a[j];
			}
			a[i+1]= 'a';
			i+=1;
		}
		if(a[i]=='4'){
			a[i]= 'b';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'o';
			a[i+2]= 'n';
			i+=2;
		}
		if(a[i]=='5'){
			a[i]= 'n';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'a';
			a[i+2]= 'm';
			i+=2;
		}
		if(a[i]=='6'){
			a[i]= 's';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'a';
			a[i+2]= 'u';
			i+=2;
		}
		if(a[i]=='7'){
			a[i]= 'b';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'a';
			a[i+2]= 'y';
			i+=2;
		}
		if(a[i]=='8'){
			a[i]= 't';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+2] = a[j];
			}
			a[i+1]= 'a';
			a[i+2]= 'm';
			i+=2;
		}
		if(a[i]=='9'){
			a[i]= 'c';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+3] = a[j];
			}
			a[i+1]= 'h';
			a[i+2]= 'i';
			a[i+3]= 'n';
			i+=3;
		}
		if(a[i]=='0'){
			a[i]= 'k';
			for(int j = strlen(a)-1; j > i; j--){
				a[j+4] = a[j];
			}
			a[i+1]= 'h';
			a[i+2]= 'o';
			a[i+3]= 'n';
			a[i+4]= 'g';
			i+=4;
		}
	}
	printf("Xau da thay doi: ");
	puts(a);
}
