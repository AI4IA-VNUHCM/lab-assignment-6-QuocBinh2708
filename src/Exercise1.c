/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	char *digit1[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *digit2[]= {"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *digit3[]= {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"}; 
    while(n!=0){
        if (n>=1000 && n<=9999 ){
        printf("%s thousand", digit1[n/1000]);
        n = n-(n/1000)*1000;}
        else if  (n>=100 && n<=999){
            printf(" %s hundred", digit1[n/100]);
            n = n-(n/100)*100;
        }
        else if (n>=20 && n<=99){
            printf(" %s ",digit3[n/10]);
            n = n-(n/10)*10;
        }
        else if (n>=10 && n<=19){
            printf(" %s ",digit2[n-10]);
            n=0;
        }
        else if (n>=1 && n<=9){
            printf("%s", digit1[n]);
            n=0;
        }
    }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
