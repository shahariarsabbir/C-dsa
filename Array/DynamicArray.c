#include<stdio.h>
#include<stdlib.h>


int main(){
    int size;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    ptr = (int*) malloc(size * sizeof(int));
    
    if(ptr == NULL){
        printf("Memory allocation failed\n");
    }
    else{
        printf("Failed to allocate memory\n");
        for(int i=0;i<size;i++){
            ptr[i] = i+1;
        }
        printf("The elements of the array are: ");
        for (int k = 0; k < size; ++k) {
            printf("%d, ", ptr[k]);
        }
        
        free(ptr);
    }


    return 0;
}