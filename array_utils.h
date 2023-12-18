

//place your documentation and prototypes here
// check the number contain or not in array
int contains(const int *arr, int size, int x);
// check them in a certain range in a array
int containsWithin(const int *arr, int size, int x, int i, int j);
// dynamic array copy the old array value and store if its greater store zero etc
int * paddedCopy(const int *arr, int oldSize, int newSize);
// Just print array
void printArray(int *copyArray, int newSize);
// Reverse array element
void reverse(int *arr, int size);
// reverse array element in store in dynamic storage
int * reverseCopy(int *arr, int size);