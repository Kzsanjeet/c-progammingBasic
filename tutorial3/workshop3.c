#include <string.h>
#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,49};
    int i,sum =0,count=0;;
    for(i=0;i<8;i++){
        if(arr[i]%7 == 0 && (arr[i]%2 != 0 && arr[i]%3 != 0)){
            sum +=arr[i];   
            count+=1;
        }
    
}
printf("%d\n",sum);
printf("%d",count);
    return 0;
}

// copying one string to another variable

// void main(){
//     char str1[20],str2[20];
//     printf("Enter string1:");
//     scanf("%s",str1);
//     printf("String1 gets copied to string2:%s",strcpy(str2,str1));
// }

// lenngth of the string

// int main() {
//     char string1[20];
//     printf("Enter a string : ");
//     scanf("%s", string1);
//     printf("The length of string is: %ld", strlen(string1));
//     return 0;
// }


//string compare

// void main(){
//     char str1[20],str2[20];
//     printf("Enter string1:");
//     scanf("%s",str1);
//      printf("Enter string2:");
//     scanf("%s",str2);
//     printf("comparing two string we get:%d",strcmp(str2,str1));
// }

//array using function 
//sum of array

// int sumofarray(int arr[],int size);

// int sumofarray(int arr[],int size){
//     int i,sum =0;
//     for(i=0;i<size;i++){
//         sum = sum + arr[i];   
//     }
//     return sum;
//     }
// void main(){
//         int array[]={1,2,3,4,5};
//         int size = sizeof(array)/sizeof(array[0]); // to find out the length of an array to calculate how many elements r there in array
//         int sum = sumofarray(array,size);
//         printf("The sum of array is:%d",sum);
// }

//pointers
// it is the variable that stores the memory address of another variable
// there are two types of pointers
// 1. pointer variable
// 2. dereferencing a pointer

// void main(){
//     int a = 45;
//     int *ptr ;     
//     // = &a;
//     ptr = &a;
//     printf("\nMemory address of ptr:%p",&ptr);
//     printf("\nMemorry address of a:%p",&a);
//     printf("\nThe value of ptr:",ptr);
//     printf("\nvalue of *ptr %d",*ptr);
// }


// workshop 2 qno 3


//array using function 
//sum of array




