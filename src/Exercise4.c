/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int i, j, l;
	l = strlen(str);
	for (i=0; i<l; i++){
		if (str[0]==' '){
			for (i=0; i< (l-1); i++)
			str[i] = str[i+1];
			str[i] = '\0';
			l--;
			i = -1;
			continue;
		}
		if (str[i]==' ' && str[i+1]==' '){
			for (j=i; j<(l-1); j++){
				str[j] = str[j+1];
			}
			str[j] = '\0';
			l--;
			i--;
		}
	}
	printf ("%s", str);
	return;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}