#include <stdio.h> 
#include <string.h>

void EightQueens(char * strArr[]) { 
int size = 8, charToInt = -48;
	int rows[size];
	int cols[size];
	
	for(int queen = 0; queen < size; queen++) {
		rows[queen] = *(strArr[queen] + 1) + charToInt;
		cols[queen] = *(strArr[queen] + 3) + charToInt;
		//printf("row[%d] = %d, col[%d] = %d\n", queen, rows[queen], queen, cols[queen]);
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if((i != j && rows[i] == rows[j]) || (i != j && cols[i] == cols[j])) {
				printf("%s", strArr[i]);
				return;
			}
			double slope = 0;
			if(rows[j] - rows[i] != 0) {
				printf("slope = (%d - %d) / (%d - %d)\n", cols[j], cols[i], rows[j], rows[i]);
				slope = (double)(cols[j] - cols[i])/(rows[j] - rows[i]);
			} else {
				slope = 0;
			}
				
			if(i!= j && (slope == 1 || slope == -1)) {
				printf("slope : %d, queen1: %s, queen2: %s\n", slope, strArr[i], strArr[j]);
			    printf("%s", strArr[i]);
				return;
			}
		}
	}
	
	printf("true"); 
            
}

int main(void) { 
   
  // keep this function call here
  /* Note: In C you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. */
     
  char * A[] = {"(2,1)", "(4,3)", "(6,3)", "(8,4)", "(3,4)", "(1,6)", "(7,7)", "(5,8)"};
  char * B[] = {"(2,1)", "(5,3)", "(6,3)", "(8,4)", "(3,4)", "(1,8)", "(7,7)", "(5,8)"};
  
  EightQueens(B);
  return 0;
    
} 


  