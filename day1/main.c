#include <stdio.h>

char* readInput(){
	FILE *fp;
	int c;

	fp = fopen("input.txt", "r");

	while((c = fgetc(fp)) != EOF){
		printf("%c", c);
	};

	fclose(fp);
};

void main(void){
	readInput();
};
