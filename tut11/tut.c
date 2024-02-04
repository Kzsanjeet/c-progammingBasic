#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

int shared = 10;

sem_t semaphore;

void *first(void *p){
    sem_wait(&semaphore); //1-1 =0 (unavailable)
    int x =shared;
    x = x+1;
    sleep(1);
    shared =x;
    sem_post(&semaphore); // 0+1 = 1(available)
} 

void *second(void*p){
    sem_wait(&semaphore); //1-1=0
    int y = shared;
    y = y-1;
    sleep(1);
    shared = y;
    sem_post(&semaphore); //0+1 =1
}

void main(){
    pthread_t thread1, thread2;
    sem_init(&semaphore,0,1);
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread1,NULL, second,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    printf("The value of shared:%d",shared);
    sem_destroy(&semaphore);
}