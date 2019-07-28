#include <stdio.h> 
#include <string.h>

//Challenge: Take the str parameter and shift every letter to the right,
//ex. 'b' becomes 'c', 'z' becomes 'a'.
//Then capitalize every vowel in the modified string
//and print the result. Ignore punctuation.

//See https://www.coderbyte.com/editor/guest:Letter%20Changes:C
//for a full description of the coding challenge

void LetterChanges(char str[]) { 
  int i = 0;
  char c = '!';
  
  while(str[i] != '\0') {
     c = str[i]; //save a char in str to c
     if(str[i] == 'z') { //shirt 'z's and 'Z's to 'a' or 'A', otherwise add 1 to c
        c -= 32;
     } else if (str[i] == 'Z') {
        c += 32;
     } else if(str[i] >= 'a' && str[i] <= 'z'){
         c++;
     }
    
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { //capitalize vowels
          c -= 32;
      }
    
    printf("%c", c);
    i++;
    
    }
            
}

int main(void) { 
  
  char test[] = {'h', 'e', 'l', 'l', 'o', '*', '3', '\0'};
 //to test before submitting to Coderbyte, replace gets(stdin) with the test str
  LetterChanges(gets(stdin));
  return 0;
    
} 


  

  