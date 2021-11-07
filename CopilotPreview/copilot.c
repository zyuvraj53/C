#include<stdio.h> 
#include<stdlib.h>

void generateRandomNumbers(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        array[i] = rand() % 100;
    }
}

int main(){
    int array[10];
    generateRandomNumbers(array, 10);
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
