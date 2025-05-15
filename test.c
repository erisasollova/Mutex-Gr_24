#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int counter = 0;
pthread_mutex_t lock;
int main() {
    pthread_mutex_init(&lock, NULL);
}