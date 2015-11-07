#include<stdio.h>

main(){
	int c;
	int arr[128]={0};
	while((c=getchar()) != EOF){
		++arr[c];
	}
	int i, j;
	for(i=32; i<128; i++){
		printf("%c: ", i);
		for(j=0; j<arr[i]; j++){
			printf("-");
		}
		printf("\n");
	}
}
