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

int
main(void)
{
    pthread_t tid;
    int seconds;

    printf("Primary Thread Started ID 0x%x\n", pthread_self());


    if (pthread_create(&tid, NULL, thread, NULL) != 0)
        printf("Failed Thread\n");


    sleep(1);

    for (seconds = 1; seconds <= 5; seconds++)
    {

        printf("Primary Thread Seconds %d\n", seconds);
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
    int seconds;

    printf("Created Thread Started ID 0x%x\n", pthread_self());


    sleep(1);

    for (seconds = 1; seconds <= 5; seconds++)
    {

        printf("Created Thread Seconds %d\n", seconds);
        sleep(1);
    }

    printf("Created Thread Stopped ID 0x%x\n", pthread_self());

    return NULL;
}