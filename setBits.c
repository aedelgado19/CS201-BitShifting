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
  
  // check if the input is null
  // (index 0 is ./a.out so index 1 should be an int)
  if(argv[1] == NULL){
    printf("Error: you did not enter any numbers.\n");
    exit(1);
  }
  
  //convert all to integers
  for(int i = 1; i < argc; ++i){
    argv[i] = atoi(argv[i]);
  }
  
  //check range
  for(int j = 1; j < argc; ++j){
    if(argv[j] < 0 || argv[j] > 15){
      printf("Error: a number was out of range: %d\n", argv[j]);
      exit(1);
    }
    printf("hi\n");
    output = (double) output | pow(2, atoi(argv[j]));
  }
  printf("output: %u", output);
  return 0;
}
