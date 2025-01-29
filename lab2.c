#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    char cmd[BUFSIZE];  // Fixed-size buffer
    strcpy(cmd, "wc -c < "); // Unsafe: No bounds checking
    strcat(cmd, argv[1]);    // Unsafe: Can overflow buffer

    system(cmd);
    return 0;
}
