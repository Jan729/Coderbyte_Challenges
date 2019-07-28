#include <stdio.h> 
#include <string.h>

//Coderbyte challenge: print the factorial of 'num'

void FirstFactorial(int num) { 
  
  int ans = 1;
  for(int i = num; i > 1; i--) {
      ans *= i;
  }
  
  printf("%d", ans); 
            
}

int main(void) { 
  
  // keep this function call here
  //to test before submitting to Coderbyte, replace gets(stdin) with a number
  FirstFactorial(gets(stdin));
  return 0;
    
}