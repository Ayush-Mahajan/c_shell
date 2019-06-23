#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    //load config files, if any


    //Run command loop
    lsh_loop();

    return EXIT_SUCCESS;
}