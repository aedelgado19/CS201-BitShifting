/* Author: Allison Delgado
   Class: CS 201 Spring 2021
   This part of the assignment uses setBits
   setBits intakes a list of integers and 
   outputs the correct bits
   
   Last updated: April 26, 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  unsigned short output = 0;

  //check if the user entered numbers
  if(argc < 2){
    printf("Error: You did not enter any numbers.\n");
    exit(1);
  }
  
  //check range
  for(int j = 1; j < argc; ++j){
    int num = atoi(argv[j]);
    if(num < 0 || num > 15){
      printf("Error: a number was out of range: %d\n", num);
      exit(1);
    }
    output = output | (int) pow(2, num);
  }
  printf("output: %u\n", output);
  return 0;
}
