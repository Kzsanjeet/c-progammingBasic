// Parallesim -> it is the process of completing multiple task at a same time.
            //-> it is not possible in single core at least 2 core is needed in the process.

// Concurrency -> it is the process of completing multiple task in single core/multi core with the help of context switching //taking some pause// and then again coming back to complete another task.
            // ->multi-threading is the example of concurrency

// ->Difference between parallesim and Concurrency:
// parallesim                             // Concurency
// -> multi core                        -> single core/ multi
//->Multi task are performed            -> context switching takes place while performing multi tasking
// at same time
//-> Many resources are needed          -> limited resources
//-> Performance improvement            -> performance degradation
//-> Resource sharing                   -> resource allocation
//-> different memory for different task ->same memory for performing different task

// Flynn's Taxonomy(SISD,SIMD,MISD,MIMD):
//SISD  ->Single Instruction single data -> it can only perfrom single data and perform -> for eg: c = a+b but not m=a-b simultaneously
// SIMD -> Single instruction Multiple Data -> it takes single instuction but multiple data -> for eg: c= a+b, b = x+y but not z = c-d
// MISD -> Multi Instruction Single Data -> it takes multiple instruction but single data -> fo eg: c=a+b, c=a-b, c=a*b, c=a/b but not different data
// MIMD -> Multi Instruction Multiple Data -> it takes multi instrcution and data -> for eg: c= a+b, m = n*n , z =b/n

// Multitasking: multitasking is the example of both parallesim and concurrency.

//PCB(Process Control BLock) -> Process ID Process Identification Process Status

// Multithreading -> It is the process of dividing the single task into multiple threads.

//Why we need multi threading? -> //1. To improve the performance of the system by using more CPU cycles. 
                            //->2. For improving the user experience.
                            // In windows if you open many applications then all the application will run one after another
                            // ->3. So that the user can do something else instead of waiting for one application



// Code Examples:
// #include <stdio.h>
// #include <unistd.h> //it is used to pause 
// #include <pthread.h>

// void *first(void *p){
//     while(1){
//         sleep(1); // use the pause for one sec and prints it slowly
//         printf("I am first.\n");
//     }
// }

// void second(){
//     while(1){
//         sleep(2);
//         printf("I am second.\n");
//     }
// }

// int main(){
//     // threads are always created in main funtion.
//     pthread_t thread;
//     // the function should be void compulsory while passing the arguments
//     pthread_create(&thread,NULL,first,NULL); // first parameter is address of thread, second is args of first i.e is NUll,third is first fucntion
//     // forth is args of third which is NULL for now.
//     second();
//     return 0;
// }// here it only prints first function
// call using gcc filename.c -o exename -pthread

//another example
#include <stdio.h>
#include <unistd.h> //it is used to pause 
#include <pthread.h>

void *first(void *p){
    int i;
    for(i=0; i<8; i++){
        sleep(1);
        printf("I am first\n");
    }
}

void second(){
     int i;
    for(i=0; i<3; i++){
        sleep(2);
        printf("I am Second\n");
    }
}

int main(){
    // threads are always created in main funtion.
    pthread_t thread;
    // the function should be void compulsory while passing the arguments
    pthread_create(&thread,NULL,first,NULL); // first parameter is address of thread, second is args of first i.e is NUll,third is first fucntion
    // forth is args of third which is NULL for now.
    second();
    pthread_join(thread,NULL);
    return 0;
}

//pthread join only takes two args (thread,NULL) -> it completes thread task