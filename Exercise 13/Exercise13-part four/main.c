/*
 * Programmer: Shayan Mansornia     Date:1/1/2022
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
void *thread(void *);

int data;
pthread_mutex_t mutex;

int
main(void)
{
    pthread_t tid;

    int loop;

    printf("Primary Thread Started ID 0x%x\n", pthread_self());


    data = 0;


    if (pthread_mutex_init(&mutex, NULL) != 0)
        printf("Failed Mutex\n");


    if (pthread_create(&tid, NULL, thread, NULL) != 0)
        printf("Failed Thread\n");


    sleep(1);

    for (loop = 0; loop < 5; loop++)
    {

        pthread_mutex_lock(&mutex);
        printf("Primary Thread Writing Loop %d Data %d\n", loop, ++data);
        pthread_mutex_unlock(&mutex);

        sleep(1);
    }


    if (pthread_join(tid, NULL) != 0)
        printf("Failed Join\n");

    printf("Primary Thread Stopped ID 0x%x\n", pthread_self());

    return 0;
}

void *
thread(void *argument)
{
    int loop;

    printf("Created Thread Started ID 0x%x\n", pthread_self());


    sleep(1);

    for (loop = 0; loop < 5; loop++)
    {

        pthread_mutex_lock(&mutex);
        printf("Created Thread Writing Loop %d Data %d\n", loop, ++data);
        pthread_mutex_unlock(&mutex);

        sleep(1);
    }

    printf("Created Thread Stopped ID 0x%x\n", pthread_self());

    return NULL;
}