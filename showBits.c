/* Author: Allison Delgado
   Class: CS 201 Spring 2021
   This part of the assignment uses showBits.
   showBits intakes two 32bit hex integers and prints bits in hex,
   signed integer, and unsigned integer formats.
                                                     
   Last updated: April 26, 2021
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int hCount = 0; //hex
  int sCount = 0; //signed
  int uCount = 0; //unsigned
  
  //make sure the user inputs the right amount of numbers
  if(argc != 3){
    printf("Error: please provide two hexadecimal numbers as arguments to the program.\n");
    exit(1);
  }

  return 0;
}
