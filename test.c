#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int counter = 0;
pthread_mutex_t lock;
int main() {
    pthread_mutex_init(&lock, NULL);

void* increment_counter(void* arg) {
    for(int i = 0; i < 100000; i++) {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

    pthread_create(&t1, NULL, increment_counter, NULL);
    pthread_create(&t2, NULL, increment_counter, NULL);
}