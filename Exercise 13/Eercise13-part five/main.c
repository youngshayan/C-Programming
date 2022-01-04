/*
 * Programmer: Shayan Mansornia     Date:1/1/2022
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#define _REENTRANT
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *thr_sub(void *);
mutex_t lock;
main(int argc, char **argv)
{
    int i, thr_count = 100;
    char buf;

    if (argc == 2) thr_count = atoi(argv[1]);

    printf("Creating %d threads...\n", thr_count);

    mutex_lock(&lock);

    for (i=0;i<thr_count;i++) {
        thr_create(NULL,2048,thr_sub,0,0,NULL);
    }

    printf("%d threads have been created and are running!\n", i);
    printf("Press <return> to join all the threads...\n", i);


    gets(&buf);

    printf("Joining %d threads...\n", thr_count);


    mutex_unlock(&lock);


    for (i=0;i<thr_count;i++)
        thr_join(0,0,0);

    printf("All %d threads have been joined, exiting...\n", thr_count);
    return(0);
}

void *thr_sub(void *arg)
{

    mutex_lock(&lock);

    printf("Thread %d is exiting...\n", thr_self());
    mutex_unlock(&lock);

    return((void *)0);
}