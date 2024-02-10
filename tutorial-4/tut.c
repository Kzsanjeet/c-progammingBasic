#include <stdio.h>

//pointers
// void main(){
//     int a=10;
//     int*ptr;
//     ptr = &a;

//     printf("\nthe value of a: %d",a);
//     printf("\nthe value of a: %d",*ptr);
//     printf("\nThe memory address of a: %d",&a);
//     printf("\nThe memory address of a: %d",ptr);
//     printf("\nThe memory address of ptr: %d",&ptr);
// }

//double pointers

// void main(){
//     int a =20;
//     int *ptr;
//     ptr = &a;
//     int **ptr1;
//     ptr1 = &ptr;
//     printf ("\nthe value of a :%d",a);
//     printf ("\nthe value of a :%d",*ptr);
//     printf ("\nthe value of a :%d",**ptr1);
//     printf ("\nthe memory address of a :%p",&a);
//     printf ("\nthe memory address of a :%p",ptr);
//     printf ("\nthe memory address of a :%p",ptr1);
//     printf ("\nthe ptr memory address of a :%p",&ptr);

// }

//pointers to pointer to pointers
//triple pointers


// sum of pointers single

// void main(){
//     int a = 10, b = 20;
//     int *ptr , *ptr1;
//     ptr =&a;
//     ptr1 = &b;
//     int sum = *ptr + *ptr1;
//     printf("The  sum of two numbers: %d",sum);
// }


// triple
// void main(){
//     int a = 10;
//     int *ptr;
//     ptr = &a;
//     int **ptr1;
//     ptr1 = &ptr;
//     int ***ptr2;
//     ptr2 = &ptr1;
//     printf("The value of a: %d \n",a);
//     printf("The value of a: %d \n",*ptr);
//     printf("The value of a: %d \n",**ptr1);
//     printf("The value of a:%d \n",***ptr2);
// }

// #include <stdio.h>
// #include <string.h>

// // Function to check if two strings are anagrams
// int areAnagrams(const char *str1, const char *str2) {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);

//     // If lengths are not equal, they can't be anagrams
//     if (len1 != len2) {
//         return 0;
//     }

//     int count[256] = {0}; // Assuming ASCII characters

//     // Count occurrences of characters in str1
//     for (int i = 0; i < len1; i++) {
//         count[str1[i]]++;
//         count[str2[i]]--;
//     }

//     // If the strings are anagrams, the count array will be all zeros
//     for (int i = 0; i < 256; i++) {
//         if (count[i] != 0) {
//             return 0;
//         }
//     }

//     return 1;
// }

// int main() {
//     const char *str1 = "listen";
//     const char *str2 = "silent";

//     if (areAnagrams(str1, str2)) {
//         printf("'%s' and '%s' are anagrams.\n", str1, str2);
//     } else {
//         printf("'%s' and '%s' are not anagrams.\n", str1, str2);
//     }

//     return 0;
// }


// #include <stdio.h>

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     bubbleSort(arr, size);

//     printf("Sorted array in ascending order: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int count = 0; // To count the numbers
//     int sum = 0;   // To store the sum

//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
//             count++;      // Increment count for the valid number
//             sum += arr[i];// Add the valid number to the sum
//         }
//     }

//     printf("Count of numbers divisible by 5 and not by 2 or 3: %d\n", count);
//     printf("Sum of numbers divisible by 5 and not by 2 or 3: %d\n", sum);

//     return 0;
// }


#include <stdio.h>

#define ROWS 3
#define COLS 3

void addArrays(int arr1[][COLS], int arr2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array1[ROWS][COLS], array2[ROWS][COLS], sum[ROWS][COLS];

    printf("Enter elements of first array (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter elements of second array (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    addArrays(array1, array2, sum);

    printf("Sum of the arrays:\n");
    displayArray(sum);

    return 0;
}
