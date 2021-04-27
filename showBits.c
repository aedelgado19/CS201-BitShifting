/* Author: Allison Delgado
   Class: CS 201 Spring 2021
   This part of the assignment uses showBits.
   showBits intakes two 32bit hex integers and prints bits in hex,
   signed integer, and unsigned integer formats.
                                                     
   Last updated: April 26, 2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to check if the bits share 1's 
   then print out the output */
void
checkBits(char* argA, char* argB){

  //save as a long
  int arg1 = (int) strtol(argA, NULL, 0);
  int arg2 = (int) strtol(argB, NULL, 0);

  //check which bits are both 1
  for(int i = 0; i < 32; i++){
    if((1 << i) & (arg1 & arg2)){
      printf("%d, ", i);
    }
  }

  //print out the final output
  unsigned int answer = arg1 & arg2;
  printf("in common. Hexadecimal: %X, Signed: %d, Unsigned: %u.\n", answer, answer, answer);
}

int
main(int argc, char* argv[])
{
  //make sure the user inputs the right amount of numbers
  if(argc != 3){
    printf("Error: please provide two hexadecimal numbers as arguments to the program.\n");
    printf("Terminating program.\n");
    exit(1);
  }
  checkBits(argv[1], argv[2]);
  
  return 0;
}
