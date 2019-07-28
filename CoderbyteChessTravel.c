#include <stdio.h> 
#include <string.h>

//Prints the number of different pathways a queen
//can take to get from point (x,y) to (a,b)
//while only moving up and to the right.
//Assume a > x and b > y

//Ex. if str[] = (1 1)(2 2),
//x = 1, y = 1, a = 2, b = 2,
//ChessboardTravelling will print '2'

//See https://www.coderbyte.com/editor/guest:Chessboard%20Traveling:C
//for a full description of the coding challenge

long long int factorial(int num);

void ChessboardTraveling(char str[]) { 

    char x = str[1], y = str[3], a = str[6], b = str[8];
    int width, height, n, k;
    long long int paths;

    width = (int)(a - x);
    height = (int)(b - y);

    n = width + height;
    k = width;
    //use nCk method to find number of unique paths
    paths = factorial(n) / (factorial(n-k)*factorial(k));
    
    printf("%lli", paths);
  
}

long long int factorial(int num) {
    long long int ans = 1;

    for(int i = num; i > 1; i--) {
      ans *= i;
      printf("%d * ", i);
    }
    printf("= %lli", ans);

    return ans; 
}

int main(void) { 
  
    //keep this function call here
    //to test before submitting to Coderbyte, replace gets(stdin) with
    //a string of coordinates to test code

    char * test = "(1 1)(8 8)";
    ChessboardTraveling(gets(stdin));
    return 0;
    
} 


