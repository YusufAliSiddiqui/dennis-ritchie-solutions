#include<stdio.h>
#define IN 1
#define OUT 0

main(){
	char c;
	int lc=0, arr[15]={0}, state=OUT; //letter count
	while((c=getchar()) != EOF){
		//find length of word
		if(state==OUT){
			lc=0;
		}
		if(c!=' ' && c!='\n' && c!=EOF){
			state=IN;
			++lc;
		}
		else {
			++arr[lc];
			state=OUT;
		}
		
	}
	int i, j;
	for(i=1; i<=15; i++){
		printf("%d letter words: ", i);
		for(j=0; j<arr[i]; j++){
			printf("-");
		}
		printf("\n");
	}
	
}
