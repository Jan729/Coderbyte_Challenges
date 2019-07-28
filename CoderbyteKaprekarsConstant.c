#include <stdio.h> 
#include <string.h>
#include <math.h>

//Print the number of times that a specific set of math operations
//will transform a four digit number into Kaprekar's constant (6174).
//Formula: sort the digits of a number in descending order, then sort the digits in ascending order.
//Subtract the bigger number from the smaller number. Repeat with this new number

//Ex. 3524 will need 3 iterations to transform into 6174

//See https://www.coderbyte.com/editor/guest:Kaprekars%20Constant:C
//for full description of coding puzzle

void KaprekarsConstant(int num) { 
  
    int ascend = 0, descend = 0, count = 0, newNum = 0;
    int numArr[] = {num/1000, (num%1000)/100, (num%100)/10, num%10};
    
    //6174 is hard coded in the while loop condition
    //To improve this, I could check instead to see if the newNum
    //is the same as the previous num (ie both numbers would be 6174)
    //and return "count - 1". I can't return "count" because the while loop would have
    //made one extra iteration to come up with 6174 the second time
    while(newNum != 6174) {
       
       ascend = 0;
       descend = 0;
       //sort numArr into ascending order (insertion sort)
       for(int i = 1; i < 4; i++) {
           int item = numArr[i];
           int j = i;
           
            while(j > 0 && item < numArr[j - 1]) {
               numArr[j] = numArr[j-1]; //shift numbers to the right as long as they're bigger than "item"
               j--;

           }
           numArr[j] = item; //put "item" to the left of all the numbers bigger than "item"
       }
       //save digits of numArr to ascend
       for(int i = 0; i < 4; i++) {
           ascend += numArr[i]*(int)(pow(10, 3-i) + 0.5);
       }
    
       //array already sorted in ascending order
       //flip order and save to "descend"
       for(int i = 0; i < 4; i++) {
           descend += numArr[i]*(int)(pow(10,i) + 0.5);
       }
       //compute newNum and store that in newNum and numArr
       newNum = descend - ascend;
       numArr[0] = newNum/1000;
       numArr[1] = (newNum%1000)/100;
       numArr[2] = (newNum%100)/10;
       numArr[3] = newNum%10;
       count++;
    }
    //print final number of iterations
    printf("%d\n", count);
}

int main(void) { 
  
  // keep this function call here
  //to test before submitting to Coderbyte, replace gets(stdin) with a number
  KaprekarsConstant(gets(stdin));
  return 0;
    
}   