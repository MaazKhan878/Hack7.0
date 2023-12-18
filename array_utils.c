

//place your function definitions here
#include<stdio.h>

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

int * paddedCopy(const int *arr, int oldSize, int newSize){
    
}
