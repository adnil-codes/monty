#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

int main(int argc, char **argv)
{
    FILE *fp = NULL;

    /*If no file is provided*/
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /*To open the file*/
    fp = fopen(argv[1], "r");

    /*Cannot open the file*/
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /*To execute the bytecode*/
    monty_exec(fp);

    /*Close the file*/
    fclose(fp);

    return (0);
}
