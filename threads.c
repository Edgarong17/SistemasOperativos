#include <stdio.h>
#include <pthread.h>

void *printHello(void *arg){
    int hid = *((int *)arg); //Se transforma el argumento en entero
    printf("Hola desde el hilo %d\n",hid);
    pthread_exit(NULL);
}

//Hilo principal
int main(){ //En el momento que termina el main entonces los hilos dejan de ejecutarse
    int NUM_THREADS = 20;
    pthread_t threadStatus[NUM_THREADS]; //GUADRDA LOS HILOS
    int hids[NUM_THREADS];
    for(int i=0; i<NUM_THREADS; i++){
        hids[i] = i;
        pthread_create(&threadStatus[i], NULL, printHello,(void *)&hids[i]); //Trata i como una dirreccion generica
    }
    pthread_exit(NULL);
}