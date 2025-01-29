#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    // Use a safer approach with execvp instead of system
    char *args[] = {"wc", "-c", argv[1], NULL};
    if (execvp("wc", args) == -1) {
        perror("Error executing wc");
        return -1;
    }

    return 0;
}
