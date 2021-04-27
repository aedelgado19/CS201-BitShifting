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
#include <ctype.h>
#define MAX 3

int
checkBits(char* arg, char* arg2){
  
  
}

int
main(int argc, char* argv[])
{
  int success = 0;
  
  //make sure the user inputs the right amount of numbers
  if(argc != 3){
    printf("Error: please provide two hexadecimal numbers as arguments to the program.\n");
    printf("Terminating program.\n");
    exit(1);
  }

  //check that the input is in hexadecimal
  for(int i = 1; i < argc; i++){
    for(int j = 0; j < strnlen(argv[j], MAX); j++){
      if(!isxdigit(argv[i][j])){
	printf("Error: that was not in hexadecimal. Terminating program.\n");
	exit(1);
      }
    }
  }
  success = checkBits(argc[1], argc[2]);
  
  return 0;
}
