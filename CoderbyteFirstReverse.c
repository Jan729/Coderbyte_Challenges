#include <stdio.h> 
#include <string.h>

//prints the given string in reverse order
//Ex: if str is 'hello', FirstReverse will print
//'olleh'

//See https://www.coderbyte.com/editor/guest:First%20Reverse:C
//for a full description of the coding challenge

void FirstReverse(char str[]) { 
  
  //find the length of string
  int length = 0;
  while(str[length] != '\0') {
      length++;
  }
  
  //print chars in reverse order
  for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]); 
  }
            
}

int main(void) { 
  
  // keep this function call here
  //to test before submitting to Coderbyte, replace gets(stdin) with a string
  FirstReverse(gets(stdin));
  return 0;
    
}