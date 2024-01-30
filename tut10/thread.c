#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

//char ch = 'A';
//void *fun(void *p){
//    pthread_exit((void *) &ch);
//}
//
//void main(){
//    void *ptr;
//    pthread_t thread1;
//    pthread_create(&thread1, NULL, fun, NULL);
//    pthread_join(thread1, &ptr);
//    sleep(1);
//    pthread_join(thread1, &ptr);
//    printf("The value of ch is %c\n", *(char *)ptr);
//}





// int sum = 0;
// void *fun(void *p)
// {
//     for (int i = 0; i < 501; i++)
//     {
//         sum += i;
//     }
//     pthread_exit((void *)&sum);
// }

// int sum2 = 0;
// void *fun1(void *p)
// {
//     for (int i = 501; i < 1001; i++)
//     {
//         sum2 += i;
//     }
//     pthread_exit((void *)&sum2);
// }


// int main()
// {
//     void *ptr;
//     void *ptr1;
//     pthread_t thread1;
//     pthread_t thread2;
//     pthread_create(&thread1, NULL, fun, NULL);
//         sleep(1);
//     pthread_create(&thread2,NULL,fun1,NULL);
//     pthread_join(thread1, &ptr);
//     pthread_join(thread2,&ptr1);

//     printf("The value is %d", *(int *)ptr);
//     printf("The value is %d", *(int *)ptr1);

//     return 0;
// }

// thread cancel

// void *fun(void *p)
// {
//     for(int i=1; i<=1000000; i++){
//         printf("Hello i:%d",i);
//         pthread_testcancel();
//     }
// }

// int main(){
//     pthread_t thread1;
//     pthread_create(&thread1,NULL,fun,NULL);
//     sleep(1);
//     pthread_cancel(thread1);
//     printf("The thread cancel");

// }


void *fun(void *p){
    int *a = (int*)malloc(sizeof(int));
    *a =10;
    pthread_exit((void*)a);
}

void main(){
    void *ptr;
    pthread_t thread1;
    pthread_create(&thread1,NULL,fun,NULL);
    sleep(1);
    pthread_join(thread1,&ptr);
    printf("The value of a:%d",*(int*)ptr);
    free(ptr);
}