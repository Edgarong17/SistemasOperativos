#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if (pid == 0){
        printf("Soy el hijo \n");
        execl("./hola", "hola", "pedro", "luis", "mary", (char *)NULL);
        printf("ESTA LINEA NO DBE EJECUTARSE"); 
    }
    printf ("soy el proceso padre \n");
}