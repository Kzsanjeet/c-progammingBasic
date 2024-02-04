// 1 file -> It is the sequence of bits to store data permanently

// file handling -> it is the process of opening,creating,writing,read,modifying,updating and closing of a file
//file datatype -> user defined
// typedef -> it helps you to create your own keyword
// fopenand fclose->
// #include <stdio.h>
// void main(){
//     FILE *fptr;
//     fptr = fopen("filename.txt","mode");
// }

//write garney tarika haru
//fputc,-> used for writing a single character to a file
//for example
// fputc(variablename,filepointername);
//fputs,-> used for writing a string to a file
//for example
// fputs(variablename,filepointername);
//fprintf-> works with all the data types including characters array of characters
//for example
// fprintf(fptr,"%s %d",name,age);

// #include <stdio.h>
// void main(){
//     FILE *fptr; // pointers bina file handle hudaina cuz it helps to for location 
//     fptr = fopen("L5CG23.txt","w");
//     // char ch = 'a'; // using a single char
//     //char ch[10]="Sanjeet";// using 
//     char name[10];
//     int age;
    
//     if(fptr!= NULL) {
//         printf("FILE opened sucessfully!");
//         // fputc(ch,fptr); // used for single char
//         //fputs(ch,fptr); // used for string
//         printf("Enter your name:");
//         scanf("%s",name);
//         printf("Enter your Age: ");
//         scanf("%d",&age);
//         printf(fptr,"Name:%s Age:%d",name,age);
//     }else{
//         printf("Unable to open the file.");
//     }
//     fclose(fptr);
// }


// #include <stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("L5CG23.txt", "w");
//     char name[50]; // Increased array size to accommodate longer names
//     int age;
    
//     if (fptr != NULL) {
//         printf("FILE opened successfully!\n");
        
//         printf("Enter your name: ");
//         scanf("%s", name);
        
//         printf("Enter your Age: ");
//         scanf("%d", &age);
        
//         fprintf(fptr, "Name: %s Age: %d\n", name, age);
//         printf("Data written to file successfully!\n");
        
//         fclose(fptr);
//     } else {
//         printf("Unable to open the file.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("L5CG23.txt", "a");
    char address[50]; // Increased array size to accommodate longer addresses
    long long int phonenumber;
    
    if (fptr != NULL) {
        printf("FILE opened successfully!\n");
        
        printf("Enter your Address: ");
        scanf("%s", address);
        
        printf("Enter your phonenumber: ");
        scanf("%lld", &phonenumber); // Added '&' before phonenumber
        
        fprintf(fptr, "Address: %s\n Phonenumber: %lld\n", address, phonenumber);
        printf("Data written to file successfully!\n");
        
        fclose(fptr);
    } else {
        printf("Unable to open the file.\n");
    }
    
    return 0;
}


