
//DMA (Dynamic Memory allocation) - It is the process of allocating memory during runtime.
//This function is used to allocate memory dynamically using DMA.

//Malloc()(Memory allocarion)- It is used to allocate the memory for a single block

//Syntax;
//datatype *pointer variable = (typecast*) malloc(no of element * sizeof(datatype));
// example
// int *ptr = (int* malloc(5*sizeof(int)));
//ptr = (int*)malloc(n*sizeof(int));


#include <stdio.h>
#include<stdlib.h>

// void main(){
//     int n,i;
//     int *ptr;
//     printf("Enter the size: ");
//     scanf("%d",&n);

//     ptr = (int*)malloc(n*sizeof(int));
//     for (i=0;i<n;i++){
//         printf("Enter the element for the index%d:",i);
//         scanf("%d",ptr+i);
//     }
//     //printing the elements

//     printf("Entered element are:");
//     for (i=0; i<n; i++) {
//         printf("Index:%d Memory address:%p Value: %d",i,ptr+i,*(ptr+i));
//     }
//     free(ptr);
// }

//calloc()(contiguous allocation)-it is used to dynamically allocate multiple block of memory

// differences
//The major difference between malloc and calloc is that malloc initializes carbage value and calloc intitializez zero

// Syntax:
//datatype *pointer variable = (typecast*) calloc(no of element * sizeof(datatype));
// example:
//int*ptr = (int*) calloc(5, sizeof(int));

// void main(){
//     int n,i;
//     int *ptr;
//     printf("Enter the size: ");
//     scanf("%d",&n);

//     ptr = (int*)calloc(n,sizeof(int));
//     for (i=0;i<n;i++){
//         printf("Enter the element for the index%d:",i);
//         scanf("%d",ptr+i);
//     }
//     //printing the elements

//     printf("Entered element are:");
//     for (i=0; i<n; i++) {
//         printf("\nIndex:%d \nMemory address:%p \nValue: %d",i,ptr+i,*(ptr+i));
//     }
//     free(ptr);
// }

//realloc()(reallocate memory)- It is used to increase the size of block to previously done program in malloc/calloc without lossing the old data
// Syntax:
// previous-pointer variable=() (typecast*) realloc(previous ptr_var,no of element * sizeof(datatype));
// Example :
// int*ptr = (int*) malloc(5*sizeof(int))
// ptr = (int*) realloc(ptr,2*sizeof(int))

// code
// int main()
// {
//     int n, i;
//     int *ptr;
//     printf("Enter the size : ");
//     scanf("%d", &n);
//     ptr = (int *)malloc(n * sizeof(int));
//     for (i = 0; i < n; i++)
//     {
//         printf("\n Enter element for index %d: ", i);
//         scanf("%d", ptr + i);
//     }
//     printf("The elements are;:");
//     for (i = 0; i < n; i++)
//     {
//         printf("\n Index: %d Memory Address: %p Value: %d", i, ptr + i, *(ptr + i));
//     }
//     int new_size;
//     printf("\n\n Enter the new size: ");
//     scanf("%d", &new_size);

//     ptr = (int *)realloc(ptr, new_size * sizeof(int));
//     for (i = n; i < n + new_size; i++)
//     {
//         printf("\n Enter element for index %d: ", i);
//         scanf("%d", ptr + i);
//     }
//     printf("\n The updated elements are as follows:\n");
//     for (i = 0; i < n + new_size; i++)
//     {
//         printf("\n Index: %d Memory Address: %p Value: %d", i, ptr + i, *(ptr + i));
//     }

//     free(ptr);
//     return 0;
// }

// workshop1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    float *b;
    char *c;

    a = (int*)malloc(sizeof(int));
    b = (float*)malloc(sizeof(float));
    c = (char*)malloc(sizeof(char));

    if (a == NULL || b == NULL || c == NULL) {
        printf("Memory allocation failed. Exiting...");
        return 1;
    }

    printf("Enter the integer value for a: ");
    scanf("%d", a);
    printf("Enter the float value for b: ");
    scanf("%f", b);
    printf("Enter the char value for c: ");
    scanf(" %c", c);

    printf("\n The value of a: %d", *a);
    printf("\n The value of b: %f", *b);
    printf("\n The value of c: %c", *c);

    free(a);
    free(b);
    free(c);

    return 0;
}




