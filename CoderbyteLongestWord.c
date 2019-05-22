#include <stdio.h> 
#include <string.h>

//See https://www.coderbyte.com/editor/guest:Longest%20Word:C
//for the full description of the coding puzzle

//Prints the longest word in the char array 'sen'.
//Excludes punctuation from the letter count

void LongestWord(char sen[]) { 
	//longWord is the index to the starting char of the longest word so far
	//startChar is the starting index of the next word
	int count = 0, i = 0, longestCount = 0;
	int longWord = 0, startChar = 0;;

	while(sen[i] != '\0') {

		if((sen[i] >= 'A' && sen[i] <= 'Z') || (sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= '0' && sen[i] <= '9')) {
		  count++;
		}else {
		  count = 0;
		  startChar = i+1;
		}

		if(count > longestCount) {
			longWord = startChar; 
			longestCount = count;
		}
		
		i++;
	}

	for(int i = 0; i < longestCount; i++) {
		printf("%c", sen[i+longWord]); 
	}
}

int main(void) { 

	// keep this function call here
	//replace gets(stdin) with array A to test code
	//char A[] = {'H','e', 'l', 'l', 'o', ',', 'W', 'o', 'r', 'l', 'd', '!', '!', '\0'};
	LongestWord(gets(stdin));
	return 0;

} 
