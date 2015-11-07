#include<stdio.h>
#define MAXLINE 1000 

int getline(char s[], int lim){
	int c, i;
	for(i=0; i<lim-1 && c=getchar() && c!='\n'; i++);
		s[i]=c;
	if(c=='\n')
		s[i++]='\n';
	s[i]='\0';
	return i;	
}

main(){
	char line[MAXLINE];
	while(len = getline(line, MAXLINE) > 80){
		
	}
	
}
