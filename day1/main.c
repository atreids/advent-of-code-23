#include <stdio.h>
#include <ctype.h>

void readInput(char *pA){
	FILE *fp;
    int c;
	int index = 0;
	

	fp = fopen("input.txt", "r");

	while ((c = fgetc(fp)) != EOF){
		pA[index] = c;
		index++;
	};

	fclose(fp);
};

void main(void){
	char charArray[100000];
	readInput(charArray);
	for (int i = 0; i < 3; i++) 
  		{
    		printf("%c\n", charArray[i]);
  		}a
};
