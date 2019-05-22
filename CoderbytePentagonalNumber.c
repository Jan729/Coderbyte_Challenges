#include <stdio.h> 
#include <string.h>

//See https://www.coderbyte.com/editor/guest:Pentagonal%20Number:C
//for a description of the coding puzzle

void PentagonalNumber(int num) { 
  //in case num is less than 1
  if(num < 1) {
	  printf("0");
	  return;
  }
  //for all other cases
  int result = 1;
  
  for(int i = num; i > 1; i--) {
      result += (num - 1)*5;
      num--;
  }
 
  printf("%d", result); 
            
}

int main(void) { 
  
  // keep this function call here
  //replace gets(stdin) with a number to test code
  PentagonalNumber(gets(stdin));
  return 0;
    
} 


  