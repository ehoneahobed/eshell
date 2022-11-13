#include "main.h"

void execmd(char **argv){
    char *command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];

        /* execute the command with execve */
        if (execve(command, argv, NULL) == -1){
            perror("Error:");
        }
    }
    
}