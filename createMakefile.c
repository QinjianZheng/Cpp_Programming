#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FOR_EACH for(int i = 1; i <= atoi(argv[2]); i++)
#define NAMESIZE 100

int main(int argc, char const *argv[])
{
    char filename[NAMESIZE];
    strcat(filename, argv[1]);
    strcat(filename, "/Makefile");
    FILE *f = fopen(filename, "w");
    fprintf(f, "CC = g++\nCCFLAGS = -Wall -Werror -std=c++11\n");
    FOR_EACH {
        fprintf(f, "ex%d: ex%d.o\n\t$(CC) -o $@ $^\n\n", i, i);
    }
    FOR_EACH {
        fprintf(f, "ex%d.o: ex%d.cpp\n\t$(CC) $(CCFLAGS) -c $^\n\n", i, i);
    }
    fprintf(f, "clean:\n\trm -rf *.o *.dSYM ");
    FOR_EACH {
        fprintf(f, "ex%d ", i);
    }
    fprintf(f, "\n\n");
    fprintf(f, "create:\n\tfor ((i=1;i<=%d;i++)); do touch ex$$i.cpp; \
        echo \\/\\* $$i\\*\\/ \\\\n\\\\n#include \\\"../std_lib_facilities.h\\\" > ex$$i.cpp;done\n", atoi(argv[2]));

    return 0;
}
