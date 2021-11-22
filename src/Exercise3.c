/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	char lexicon[100][100], min[100], max[100];
	int i = 0, j = 0, k, l;
	for (k=0; str[k]!='\0'; k++){
		if(str[k]!=' ' && str[k] !='\0'){
			lexicon[i][j++] = str[k];
		}
		else{
			lexicon[i][j]='\0';
			i++;
			j=0;
		}
	}
	l = i+1;
	strcpy(min, lexicon[0]);
	strcpy(max, lexicon[0]);
	for (k=0; k<l; k++){
		if (strlen(min)>strlen(lexicon[k])){
			strcpy(min, lexicon[k]);
		}
		if (strlen(max)<strlen(lexicon[k])){
			strcpy(max, lexicon[k]);
		}
	}
	printf("Shortest word: %s\n", min);
	printf("Longest word: %s\n",max);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
