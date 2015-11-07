#include<stdio.h>

main(){
	char c, prev='a';
	while((c=getchar()) != EOF){
		if(prev==' ' && c==' '){
			prev=c;
			continue;
		}
		else {
			prev=c;
			putchar(c);
		}
		
	}
}
