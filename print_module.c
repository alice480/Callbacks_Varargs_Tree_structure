#include <stdio.h>

#include "print_module.h"

char print_char(char ch) {
    return putchar(ch);
}

void print_log(char(*print)(char), char* message) {
    for (int i = 0; *(message + i); i++)
        print(message[i]);
    long int sistem_time;
    struct tm *local_time;
    char str[9];
    sistem_time = time(NULL);
    local_time = localtime(&sistem_time);
    strftime(str, 9, "%H:%M:%S", local_time);
    for (int i = 0; *(str + i); i++)
        print(str[i]);
}
