/*
1. Write a program that inputs an n-digit number then output its n digits from least to most significant:
Ex:
______________________________________
| Input: 132768                      |
| Output: 8 6 7 2 3 1                |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//your codes here
	int i, n, new_n, digit;
	
	n = testcase;
	while(n != 0){
		digit = n % 10;
		printf("%d ", digit);
		n = (n - digit) / 10;
	}
	
	return 0;
}
