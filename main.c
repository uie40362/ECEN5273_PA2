#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char hello[50];
    char * line;
    char * word;
    strcpy(hello, "Hello world!\r\nMy name is Jim!");
    line = strtok(hello, "\r\n");
    printf("%s", line);
    word = strtok(line, " ");
    printf("%s", word);
    line = strtok(NULL, "\r\n");
    printf("%s", line);
}
