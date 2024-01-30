// race condition -> It is the condition where the order of execution of program results into diffetent output.

// int share = 10    //global variable

// firt let be funtion

// int x = shared,
// x = 10+1
// sleep(1)
// shared = x;

//second
//  int y = shared
//  y = y-1
//  sleep(1)
//  shared = y

// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>
// int shared=10;

// void *first(void *p){
//     int x = shared;
//     x  = x+1;
//     sleep(1);
//     shared = x;
// }

// void *second(void*p){
//     int  y = shared;
//     y=y-1;
//     sleep(1);
//     shared=y;
// }
// void main(){
//     pthread_t thread1, thread2;
//     // pthread_create(&thread1,NULL,first,NULL);
//     // pthread_create(&thread2,NULL,second,NULL);
//     // pthread_join(thread1, NULL);
//     // pthread_join(thread2, NULL);   //-> this is called concurent execution in which output is not fixed. sth first sth second

//     pthread_create(&thread1,NULL,first,NULL);
//     pthread_join(thread1, NULL);
//     pthread_create(&thread2,NULL,second,NULL);
//     pthread_join(thread2, NULL);   // this is called serial execution  because the second thread waits for the first one to finish before starting

//     printf("The final value of shared :%d",shared);
// }


// critical  section->  shared variable is accessed by two or more threads at the same time
// it is the section where your variables get changed manipulated.
// shared variable should be declared as global so that all functions can access them.

// Mutual exclusion(mutex) -> to prevent multiple threads from accessing a resource simultaneously. it prevents race condition.
// NULL -> it means to leave in default statement


// mutex runs prevent the reace condition and give a final answer

// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>
// int shared=10;
// pthread_mutex_t mutex; // declaring the mutex  lock for synchronization

// void *first(void *p){
//     pthread_mutex_lock(&mutex);// locking resource so that thread2 can use it.
//     int x = shared;
//     x  = x+1;
//     sleep(1);
//     shared = x;
//     pthread_mutex_unlock(&mutex);
// }

// void *second(void*p){
//     pthread_mutex_lock(&mutex);
//     int  y = shared;
//     y=y-1;
//     sleep(1);
//     shared=y;
//     pthread_mutex_unlock(&mutex);
// }
// void main(){
//     pthread_t thread1, thread2;
//     pthread_mutex_init(&mutex,NULL); // initializing the mutex
//     pthread_create(&thread1,NULL,first,NULL);
//     pthread_create(&thread2,NULL,second,NULL);
//     pthread_join(thread1, NULL);
//     pthread_join(thread2, NULL);   // this is called serial execution  because the second thread waits for the first one to finish before starting
//     printf("The final value of shared :%d",shared);
//     pthread_mutex_destroy(&mutex); /// destroying the mutex
// }


// qn 1

// #include<stdio.h>
// #include<pthread.h>
// #include <unistd.h>

// int count=0;
// pthread_mutex_t mutex;

// void* fun(void* arg)
// {
//     pthread_mutex_lock(&mutex);
// count++;//1 //2
// int i;
// printf("Thread%d has started\n",count);
// for(i=1;i<=1000000;i++){ }
// printf("Thread %d has finished\n",count); 
// pthread_mutex_unlock(&mutex);
// }
// void main()
// {
// pthread_t thread1,thread2;
// pthread_mutex_init(&mutex,NULL);
// pthread_create(&thread1,NULL,fun,NULL);
// pthread_create(&thread2,NULL,fun,NULL);
// pthread_join(thread1,NULL);
// pthread_join(thread2,NULL);
// pthread_mutex_destroy(&mutex);
// }


//qn 2
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int counter = 0;
pthread_mutex_t mutex;
void *threadOne(void *p)
{
pthread_mutex_lock(&mutex);
int i;
int temp;
for(i=1; i<=3; i++)
{
temp = counter;
sleep(1);
counter = temp +1;
pthread_mutex_unlock(&mutex);
}
}
void *threadTwo(void *p)
{
    pthread_mutex_lock(&mutex);
int i;
int temp;
for (i=1; i<=3; i++)
{
temp = counter;
sleep(1);
counter = temp - 1;
pthread_mutex_unlock(&mutex);
}
}
void main()
{
pthread_t thrID1, thrID2;
pthread_mutex_init(&mutex,NULL);
pthread_create(&thrID1, NULL, threadOne, NULL);
pthread_create(&thrID2, NULL, threadTwo, NULL);
pthread_join(thrID1, NULL);
pthread_join(thrID2, NULL);
printf("counter = %d\n", counter);
pthread_mutex_destroy(&mutex);
}
