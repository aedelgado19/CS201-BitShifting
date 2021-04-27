/* Author: Allison Delgado
   Class: CS 201 Spring 2021
   This part of the assignment uses setBits
   setBits intakes a list of integers and 
   outputs the correct bits
   
   Last updated: April 26, 2021
*/
#include <stdio.h>
#include <stdlib.h>

int checkBit(int index, int num);
void print(int bit);

int main(int argc, char *argv[]){
  unsigned short output = 0;
  int bit = 0;
  printf("TODO - check if not a number\n");
  
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
    output = output | (int) (1 << num); //shift num left 1
  }

  for(int k = 15; k >= 0; k--){
    bit = checkBit(k, output);
    print(bit);
  }
  return 0;
}

/* A function to check which are switched on and off */
int checkBit(int index, int num){
  if((1 << index) & num){
    return 1;
  }
  return 0;
}

/* A function to print the bits out */
void print(int bit){
  if(bit == 0){
    printf("0");
  }
  if(bit == 1){
    printf("1");
  }
}
