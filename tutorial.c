# include <stdio.h>
//initailization of array 


// void main(){
//     int array[5]={1,2,3,4,5};
//     int i;
//     for(i=0;i<5;i++){
//         printf("\n Index %d " "\n value %d",i,array[i]);
//         {
            
//         }
// } 


// void main(){
//     int size,i;
//     printf("Enter the size of the array: ");
//     scanf("%d",&size);
   
//     int a[size];
//     for(i=0;i<size;i++){
//         printf("Enter the elements of an array index:%d:",i);
//         scanf("%d",&a[i]);
//     }
//     printf("\nEntered element are: ");
//     for(i=0;i<size;i++){
//         printf("\n Index: %d value: %d",i,a[i]);
//     }
// }

//2d array

// void main(){
//     int array[2][3] = {{1,2,3},{4,5,6}};
//     int i,j;
//     for(i=0; i<2; i++){
//         for (j= 0; j<3; j++){
//             printf("\n row %d col %d value %d",i,j,array[i][j]);
//         }
//     }
// }

// lab report 2 question 6

// #include <stdio.h>

// void equations(double a, double b, double c, double d, double e, double f) {
//     double determinant = a * e - b * d;
//     if (determinant == 0) {
//         printf("These equations do not have a unique solution.\n");
//     } else {
//         double x = (c * e - b * f) / determinant;
//         double y = (a * f - c * d) / determinant;
//         printf("Intersection coordinates (x, y): (%.2f, %.2f)\n", x, y);
//     }
// }

// int main() {
//     // Example usage
//     double a = 2.0, b = 3.0, c = 7.0;
//     double d = 1.0, e = -1.0, f = 3.0;

//     equations(a, b, c, d, e, f);

//     return 0;
// }

// question 5

// #include <stdio.h>
// #include <math.h>

// float velocityCalc(float v, float u, float a, float t) {
//     int nanCount = 0;
//     if (isnan(v)) {
//         v = u + (a * t);
//         nanCount++;
//     }
//     if (isnan(u)) {
//         u = v - (a * t);
//         nanCount++;
//     }
//     if (isnan(a)) {
//         a = (v - u) / t;
//         nanCount++;
//     }
//     if (isnan(t)) {
//         t = (v - u) / a;
//         nanCount++;
//     }

//     if (nanCount != 1) {
//         printf("Error: Exactly one variable should be set to NAN.\n");
//         return NAN; // Return NAN (not a number) for incorrect usage
//     }

//     return v; // Return the calculated value
// }

// int main() {
//     // Example usage
//     float finalVelocity = NAN; // Set the unknown variable to NAN
//     float initialVelocity = 20.0;
//     float acceleration = 5.0;
//     float time = 4.0;

//     // Calculate the missing value
//     float result = velocityCalc(finalVelocity, initialVelocity, acceleration, time);

//     // Print the result
//     if (!isnan(result)) {
//         printf("Final Velocity (v) = %.2f\n", result);
//     } else {
//         printf("Error occurred in calculation.\n");
//     }

//     return 0;
// }


//question 4

// #include <stdio.h>

// // Function to check for Armstrong number
// int isArmstrong(int num) {
//     int originalNum, remainder, result = 0, n = 0;
//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += power(remainder, n);
//         originalNum /= 10;
//     }

//     if (result == num)
//         return 1; // True, number is Armstrong
//     else
//         return 0; // False, number is not Armstrong
// }

// // Function to calculate power
// int power(int base, int exponent) {
//     int result = 1;
//     while (exponent != 0) {
//         result *= base;
//         --exponent;
//     }
//     return result;
// }

// // Function to check for Perfect number
// int isPerfect(int num) {
//     int i, sum = 0;

//     for (i = 1; i <= num / 2; ++i) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == num)
//         return 1; // True, number is Perfect
//     else
//         return 0; // False, number is not Perfect
// }

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Check for Armstrong number
//     if (isArmstrong(number))
//         printf("%d is an Armstrong number.\n", number);
//     else
//         printf("%d is not an Armstrong number.\n", number);

//     // Check for Perfect number
//     if (isPerfect(number))
//         printf("%d is a Perfect number.\n", number);
//     else
//         printf("%d is not a Perfect number.\n", number);

//     return 0;
// }

