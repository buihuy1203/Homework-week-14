#include <stdio.h>
#include <string.h>

int main(){
	printf("Bai 4: \n");
	char c[10000];
	printf("Nhap xau ban muon thay doi: ");
	fflush(stdin);
	gets(c);
	for(int i = 0; i <strlen(c)-1; i++){
		if(c[i] == ','|| c[i]=='.'||c[i]==';' || c[i] ==':'||c[i] == '?'||c[i] =='!'){
			c[i] =' ';
		}
	}
	printf("Xau da thay doi: ");
	for(int i = 0; i <strlen(c)-1; i++){
		printf("%c", c[i]);
	}
}
