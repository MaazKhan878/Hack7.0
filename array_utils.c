

//place your function definitions here
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// FUNCTION: TO check it contains the give number or not
int contains(const int *arr, int size, int x){
    // Check Error
    if(size <=0 ){
        printf("Invalide input to Function...\n");
        return 0;
    }
    int check = 0;
    // LOOP: to check element or present or not
    for(int i = 0; i<size; i++){
        if(arr[i] == x){
         check++;
         break;
        }
    }
    if(check != 0){
        return 1;
    }
    else{
        return 0;
    }
}
// Function: Take input about the range from lower to higher and check if element present then return true not false
int containsWithin(const int *arr, int size, int x, int i, int j){
    // check validity
    if(size<=0 || i<0 || j>size){
        printf("Invalide input to function...");
        return 0;
    }
    int check = 0;
    // Loop: check the element present or not so it will check the whole array
    for(int index = i; index<j; index++){
        if(arr[index] == x){
            check++;
            break;
        }
    }
    // CONDITION STATEMENT: check condition
    if(check == 1){
        return 1;
    }
    else{
        return 0;
    }
}

// Function: make dynamic array to stor the old size array and if it large size store zero
int * paddedCopy(const int *arr, int oldSize, int newSize){
    // ERROR HANDLING
    if(arr == NULL || oldSize <=0 || newSize<=0 ){
        printf("Invalide Input to function...\n");
        return NULL;
    }
    int *copyArray = (int *)malloc(newSize * sizeof(int));
    if(copyArray == NULL){
        printf("Memory allocation field...");
        return NULL;
    }
    // LOOP: Run and check condition and copy the element from one to another array also if new array greater it put zero if not or less it copy the some of its element
    for(int i = 0; i<newSize; i++){
        if(i<oldSize){
            copyArray[i] = arr[i];
        }else{
           copyArray[i] = 0;
        }
    }
    return copyArray;
    
}
// FUNCTION: Simple function to Print array
void printArray(int *copyArray, int newSize){
    for(int i = 0 ; i<newSize; i++){
        printf("%d ",copyArray[i]);
    }
    printf("\n");
}

// FUNCTION: THIS FUNCTION SWIP THE ELEMENT OF ARRAY WITH EACH OTHER
void reverse(int *arr, int size){
    // CHECK 
    if(size<=0){
        printf("Invalide Input to function...\n");
        return;
    }
    int i = 0;
    int j = size - 1;
    int swip;
    // LOOP: SWIPT THE ELEMENT TO CERTAIN CONDITION
    while(i<j){
        swip = arr[i];
        arr[i] = arr[j];
        arr[j] = swip;
        i++;
        j--; 
    }
  
}

int * reverseCopy(int *arr, int size){
    if(arr == NULL || size<0){
        printf("Invalide parameter list...\n");
        return NULL;
    }
    int *reverseAryCopy = (int *)malloc(size * sizeof(int));
    if(reverseAryCopy == NULL){
        printf("Memory allocation field...\n");
        return NULL;
    } 
    int i = 0;
    int j = size - 1;
    int swip = 0;
    for(int k = 0; k<size; k++){
        if(i<j){
           swip=arr[i];
           arr[i] = arr[j];
           arr[j] = swip;
           i++;
           j--;
        }
        reverseAryCopy[k] = arr[k];

    }
    return reverseAryCopy;
    // ERROR HANDLING
}
