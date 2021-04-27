/* Author: Allison Delgado
   Class: CS 201 Spring 2021
   This part of the assignment uses setBits
   setBits intakes a list of integers and 
   outputs the correct bits
   
   Last updated: April 26, 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 3

/* A function to check which are switched on and off */
int
checkBit(int index, int num)
{
  if((1 << index) & num){
    return 1;
  }
  return 0;
}

/* A function to print the bits out */
int
print(int bit)
{
  if(bit == 0){
    printf("0");
    return 0;
  }
  if(bit == 1){
    printf("1");
    return 1;
  }
  return -1;
}

int
main(int argc, char *argv[])
{
  unsigned short output = 0;
  int bit = 0;
  int success = 0;
  
  //check if the user entered numbers
  if(argc < 2){
    printf("Error: You did not enter any numbers. Terminating program.\n");
    exit(1);
  }
  
  //check validity (range, is digit)
  for(int j = 1; j < argc; j++){
    int num = atoi(argv[j]);

    //check if the input is digit
    for(int k = 0; k < strnlen(argv[j], MAX); k++){
      if(!isdigit(argv[j][k])){
	printf("Error: that was not a digit. Terminating program.\n");
	exit(1);
      }
    }
    
    //range:
    if(num < 0 || num > 15){ 
      printf("Error: a number was out of range: %d. Terminating program.\n", num);
      exit(1);
    }
    output = output | (int) (1 << num); //shift num left 1
  }

  for(int k = 15; k >= 0; k--){
    bit = checkBit(k, output);
    success = print(bit);
    if(success == -1){
      exit(1); //check return code for success
    }
  }
  printf("\n");
  return 0;
}
