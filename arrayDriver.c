// To drive the arrayUtils.c function
#include<stdio.h>
#include"array_utils.h"
int main(){
  // check the array it contains the given number or not  
  int n = 7;
  int testArray[] = {8, 6, 7, 5, 3, 0, 9};
  int check = contains(testArray, n, 5);
  if(check == 1){
    printf("The number %d contain in a Array\n",5);
  }
  else{
    printf("The number %d not contain in a Array\n",5);
  }

  int i = 2;
  int j = 6;
  int arr[] = {3,4,5,3,2,1,3,4};
  int checkElement = containsWithin(arr, 8, 4, i, j);
  if(checkElement = 1){
    printf("The number %d contains in a Array in range %d to %d\n",4,i,j);
  }
  else{
     printf("The number %d not contains in a Array in range %d to %d\n",4,i,j);
  }
  int oldSize = 6;
  int arr2[] = {2,3,4,5,6,7};
  int newSize = 8;
  int * copyArray = paddedCopy(arr2, oldSize, newSize);
  if(copyArray != NULL){
    printArray(copyArray, newSize);
  }
  int arr3[] = {10, 15, 5, 25, 0};
  printArray(arr3, 5);
  reverse(arr3, 5);
  printArray(arr3, 5);
  printArray(arr, 8);
  int * reverseCpyAry = reverseCopy(arr, 8);
  printArray(reverseCpyAry, 8);
}  