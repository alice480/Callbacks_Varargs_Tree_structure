#include <stdio.h>
#include "print_module.h"
#include "documentation_module.h"

int main() {
    #ifdef Quest1
        print_log(print_char, Log_prefix);
    #endif
    #ifdef Quest2
        char *docs[4] = {Documents};
        int *availability_mask = check_available_documentation_module(validate, Documents_count, Documents);
        for (int i = 0; i < Documents_count; i++) {
            printf("%-15s: ", docs[i]);
            if (i + 1 < Documents_count)
                printf("%d\n", availability_mask[i]);
            else
                printf("%d", availability_mask[i]);
        }
        free(availability_mask);
    #endif
    // Output availability for each document....
    return 0;
}
