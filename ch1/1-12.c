#include<stdio.h>

main(){
	char c;
	while((c=getchar()) != EOF){
		if(c!=' '){
			putchar(c);
		}
		else {
			printf("\n");
		}
	}
}
