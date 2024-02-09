#include <stdio.h>


//qn5
// int main() {
//     FILE *fileEven, *fileOdd, *fileNumbers;
//     char ch;

//     // Open even.txt and odd.txt in read mode
//     fileEven = fopen("even.txt", "r");
//     fileOdd = fopen("odd.txt", "r");

//     // Open numbers.txt in write mode
//     fileNumbers = fopen("numbers.txt", "w");

//     if (fileEven == NULL || fileOdd == NULL || fileNumbers == NULL) {
//         printf("Unable to open the file.\n");
//         return 1;
//     }

//     // Copy content from even.txt to numbers.txt
//     while ((ch = fgetc(fileEven)) != EOF) {
//         fputc(ch, fileNumbers);
//     }

//     // Copy content from odd.txt to numbers.txt
//     while ((ch = fgetc(fileOdd)) != EOF) {
//         fputc(ch, fileNumbers);
//     }

//     // Close all files
//     fclose(fileEven);
//     fclose(fileOdd);
//     fclose(fileNumbers);

//     printf("Contents copied from even.txt and odd.txt to numbers.txt.\n");

//     return 0;
// }


// qn4

#include <stdio.h>

int main() {
    FILE *fileEven, *fileOdd;
    int num;

    // Open files for even and odd numbers in write mode
    fileEven = fopen("even.txt", "w");
    fileOdd = fopen("odd.txt", "w");

    if (fileEven == NULL || fileOdd == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter integers (type 'no' to stop):\n");

    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &num) != 1) {
            // Clear input buffer if non-integer input is entered
            while (getchar() != '\n');
            break;
        }

        if (num % 2 == 0) {
            // Write even number to even.txt
            fprintf(fileEven, "%d\n", num);
        } else {
            // Write odd number to odd.txt
            fprintf(fileOdd, "%d\n", num);
        }
    }

    // Close the files
    fclose(fileEven);
    fclose(fileOdd);

    printf("Even and odd numbers written to even.txt and odd.txt respectively.\n");

    return 0;
}

//qn6
#include <stdio.h>

int main() {
    FILE *fileSum;
    int num, sum = 0;

    // Open sum.txt in append mode
    fileSum = fopen("sum.txt", "a");

    if (fileSum == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter integers (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        // Add the entered number to the sum
        sum += num;
    }

    // Append the sum to sum.txt
    fprintf(fileSum, "Sum: %d\n", sum);

    // Close the file
    fclose(fileSum);

    printf("Sum appended to sum.txt.\n");

    return 0;
}

