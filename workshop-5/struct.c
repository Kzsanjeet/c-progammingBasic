
// normal struct code
#include <stdio.h>


// struct value{
//     int a;
//     int b;
// };

// void main(){
//     struct value point;
//     point.a = 5;
//     point.b = 20;

// printf("Value of a is %d\n",point.a);
// printf("Value of b is %d\n",point.b);
// }

// Structure using pointer : excess by arrow operator


// struct value{
//     int a;
//     int b;
// };

// void main(){
//     struct value point;
//     struct value *ptr;
//     ptr = &point;
//     point.a = 5;
//     point.b = 20;

// printf("Value of a is %d\n",ptr->a);
// printf("Value of b is %d\n",ptr->b);
// }

// struct value{
//     int a;
//     int b;
// };

// void main(){
//     struct value point;
//     printf("Enter the value of a:");
//     scanf("%d",&point.a);
//     printf("Enter the value of b:");
//     scanf("%d",&point.b);
//     struct value *ptr;
//     ptr = &point;
//     printf("\nValue of a in memory is %d \n",ptr->a );
//     printf("Value of b in memory is %d \n",(*ptr).b); // same as above, just written differently
// }

// structure using function

// struct sum{
//     int a;
//     int b;
// };
// int sumofnum(int a, int b){
//     int sum = a+b;
//     return sum;

// }
// void main(){
//     struct sum add;
//     printf("Enter a:");
//     scanf("%d",&add.a);
//     printf("Enter b:");
//     scanf("%d",&add.b);
//     int s = sumofnum(add.a,add.b);
//     printf("Sum of two number using struct function: %d",s);
// }

//typedef-> user-defined keyword which helps u to create your own keywords.

//syntax

// typedef struct value{
//     dtype datanumber;
//     dtype datanumber;
//     dtype datanumber;
// }keyword;

// void main(){
    // keyword variable;
// }

// for example

// typedef struct value{
//     int a;
//     int b;
// }display;

// void main(){
//     display point;
//     printf("Enter the value of a:");
//     scanf("%d",&point.a);
//     printf("Enter the value of b:");
//     scanf("%d",&point.b);
//     struct value *ptr;
//     ptr = &point;
//     printf("\nValue of a in memory is %d \n",ptr->a );
//     printf("Value of b in memory is %d \n",(*ptr).b); // same as above, just written differently
// }

// typedef int INTERGER;
// void main(){
//     INTERGER num=10;
//     printf("The value of num : %d",num);
// }

// Structure within structure (nested structure)
// struct birth{
//     int year;
//     int month;
//     int day;
// };
// struct studentinfo{
//     char name[20];
//     char classgroup[10];
//     long long int phonenumber;
//     struct DOB birthday; //nested structure   
// };

// void main(){
//     struct studentinfo student;
//     printf("Please enter your information:\n\n");
//     printf("Name: ");
//     scanf("%19s",student.name);
//     printf("Enter the classs group:");
//     scanf("%9s",student.classgroup);
//     printf("ENter the phone number of the student :");
//     scanf("%11d",&student.phonenumber);
//     printf("Enter the date of Birth(yyyy/mm/dd):");
//     scanf("%4d/%2d/%2d",&student.birthday.year,&student.birthday.month,&student.birthday.day);

// }

//updated

#include <stdio.h>

// struct birth {
//     int year;
//     int month;
//     int day;
// };

// struct studentinfo {
//     char name[20];
//     char classgroup[10];
//     long long int phonenumber;
//     struct birth birthday; // Changed from 'struct DOB' to 'struct birth'
// };

// int main() {
//     struct studentinfo student;
//     printf("Please enter your information:\n\n");
//     printf("Name: ");
//     scanf("%19s", student.name);
//     printf("Enter the class group: ");
//     scanf("%9s", student.classgroup);
//     printf("Enter the phone number of the student: ");
//     scanf("%lld", &student.phonenumber); // Changed format specifier for long long int 
//     //we used '&' in phone number because it is an interger
//     printf("Enter the date of Birth (yyyy/mm/dd): ");
//     scanf("%d/%d/%d", &student.birthday.year, &student.birthday.month, &student.birthday.day);

//     // Printing entered information for verification
//     printf("\nInformation Entered:\n");
//     printf("Name: %s\n", student.name);
//     printf("Class Group: %s\n", student.classgroup);
//     printf("Phone Number: %lld\n", student.phonenumber);
//     printf("Date of Birth: %d/%d/%d\n", student.birthday.year, student.birthday.month, student.birthday.day);

//     return 0;
// }

// memery allocation in struct programming(padding,packing)
// memory waste->padding
// extra usages ghatauxa->packing

// struct student{
//     //char a-> 1 byte
//     // char [10]-> 10 byte
//     // int c -> 4 byte
//     // int d -> 4 byte

// }
// #pragma pack(1)
// struct studentinfo {
//     char name[20];
//     char classgroup[10];
//     long long int phonenumber;
//     struct birth birthday;
// };

// void main(){
//     struct studentinfo student;
//     printf("TOtal memory allocated:%ld",sizeof(student));

// }

// wq1
// struct complexNumber{
//     float realPart;
//     float imaginaryPart;
// };

// int main(){
//     struct complexNumber num1, num2, sum;
//     printf("Enter real and imaginary parts of the first complex number:\n");
//     printf("Real Part: ");
//     scanf("%f", &num1.realPart);
//     printf("Imaginary Part: ");
//     scanf("%f",&num1.imaginaryPart);
//     printf("Enter the real and imaginary part for second number:");
//     printf("Real Part: ");
//     scanf("%f", &num2.realPart);
//     printf("Imaginary Part: ");
//     scanf("%f",&num2.imaginaryPart);

//     sum.realPart = num1.realPart + num2.realPart;
//     sum.imaginaryPart = num1.imaginaryPart + num2.imaginaryPart;

//       printf("\nSum of the complex numbers: %.2f + %.2fi\n", sum.realPart, sum.imaginaryPart);
// }


// qn1
// #include <stdio.h>

// Define the structure
// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };

// // Function to read information of students
// void readStudentInfo(struct Student students[], int size) {
//     printf("Enter information for %d students:\n", size);
//     for (int i = 0; i < size; ++i) {
//         printf("Student %d:\n", i + 1);
//         printf("Enter name: ");
//         scanf("%s", students[i].name); // Assuming no spaces in the name
//         printf("Enter roll number: ");
//         scanf("%d", &students[i].rollNumber);
//         printf("Enter marks: ");
//         scanf("%f", &students[i].marks);
//     }
// }

// // Function to display information of students
// void displayStudentInfo(struct Student students[], int size) {
//     printf("\nStudent information:\n");
//     for (int i = 0; i < size; ++i) {
//         printf("Student %d\n", i + 1);
//         printf("Name: %s\n", students[i].name);
//         printf("Roll number: %d\n", students[i].rollNumber);
//         printf("Marks: %.2f\n", students[i].marks);
//         printf("--------------------\n");
//     }
// }

// int main() {
//     // Declare an array of 10 students
//     struct Student students[10];

//     // Read information of students
//     readStudentInfo(students, 10);

//     // Display information of students
//     displayStudentInfo(students, 10);

//     return 0;
// }


//qn2
// #include <stdio.h>

// // Define the structure for employee details
// struct Employee {
//     char name[50];
//     char post[50];
//     float salary;
// };

// // Function to filter employees with salary greater than 10,000
// struct Employee filterEmployees(struct Employee employees[], int size, int *count) {
//     struct Employee filtered[10]; // Assuming no more than 10 employees will qualify
//     int filteredCount = 0;

//     for (int i = 0; i < size; ++i) {
//         if (employees[i].salary > 10000) {
//             filtered[filteredCount] = employees[i];
//             filteredCount++;
//         }
//     }

//     *count = filteredCount; // Update the count of filtered employees
//     return *filtered; // Return the filtered array as a structure variable
// }

// int main() {
//     struct Employee employees[10]; // Array to store employee details
//     int count = 0; // Count of employees with salary > 10,000

//     // Input employee details
//     printf("Enter details of 10 employees:\n");
//     for (int i = 0; i < 10; ++i) {
//         printf("Employee %d:\n", i + 1);
//         printf("Enter name: ");
//         scanf("%s", employees[i].name);
//         printf("Enter post: ");
//         scanf("%s", employees[i].post);
//         printf("Enter salary: ");
//         scanf("%f", &employees[i].salary);
//     }

//     // Call the function to filter employees
//     struct Employee filteredEmployees = filterEmployees(employees, 10, &count);

//     // Display filtered employee details
//     printf("\nEmployees with salary greater than 10,000:\n");
//     for (int i = 0; i < count; ++i) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: %s\n", filteredEmployees[i].name);
//         printf("Post: %s\n", filteredEmployees[i].post);
//         printf("Salary: %.2f\n", filteredEmployees[i].salary);
//         printf("--------------------\n");
//     }

//     return 0;
// }


//qn3
// #include <stdio.h>

// struct Limits {
//     int lower;
//     int upper;
// };

// void display(struct Limits limits) {
//     printf("Numbers between %d and %d are:\n", limits.lower, limits.upper);
//     for (int i = limits.lower + 1; i < limits.upper; ++i) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// int main() {
//     struct Limits limits;

//     printf("Enter lower limit: ");
//     scanf("%d", &limits.lower);
//     printf("Enter upper limit: ");
//     scanf("%d", &limits.upper);

//     display(limits);

//     return 0;
// }

// qn4

// #include <stdio.h>

// // Define student_info structure
// struct student_info {
//     char name[50];
//     int age;
//     char dateOfBirth[20];
// };

// // Define Student structure containing student_info
// struct Student {
//     int rollNo;
//     float marks;
//     struct student_info info;
// };

// int main() {
//     struct Student students[3];

//     // Input information for 3 students
//     for (int i = 0; i < 3; ++i) {
//         printf("Enter details for Student %d:\n", i + 1);
//         printf("Roll No: ");
//         scanf("%d", &students[i].rollNo);
//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//         printf("Name: ");
//         scanf("%s", students[i].info.name);
//         printf("Age: ");
//         scanf("%d", &students[i].info.age);
//         printf("Date of Birth (YYYY-MM-DD): ");
//         scanf("%s", students[i].info.dateOfBirth);
//     }

//     // Display information for 3 students
//     printf("\nStudent Information:\n");
//     for (int i = 0; i < 3; ++i) {
//         printf("Student %d\n", i + 1);
//         printf("Roll No: %d\n", students[i].rollNo);
//         printf("Marks: %.2f\n", students[i].marks);
//         printf("Name: %s\n", students[i].info.name);
//         printf("Age: %d\n", students[i].info.age);
//         printf("Date of Birth: %s\n", students[i].info.dateOfBirth);
//         printf("--------------------\n");
//     }

//     return 0;
// }

//qn5

#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int hoursWorked;
};

int main() {
    struct Employee employees[5];

    // Input information for 5 employees
    printf("Enter information for 5 employees:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hoursWorked);
    }

    // Increase salary based on hours worked per day
    for (int i = 0; i < 5; ++i) {
        if (employees[i].hoursWorked >= 12) {
            employees[i].salary += 150;
        } else if (employees[i].hoursWorked >= 10) {
            employees[i].salary += 100;
        } else if (employees[i].hoursWorked >= 8) {
            employees[i].salary += 50;
        }
    }

    // Display employees' names and final salaries
    printf("\nEmployee information with final salaries:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("--------------------\n");
    }

    return 0;
}



