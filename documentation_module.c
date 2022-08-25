#include "documentation_module.h"

int validate(char* data) {
    int validation_result = !strcmp(data, Available_document);
    return validation_result;
}

int* check_available_documentation_module(int (*validate)(char*), int document_count, ...) {
    va_list args;
    int *data = malloc(document_count * sizeof(int));
    va_start(args, document_count);
    for (int i = 0; i < document_count; i++) {
        data[i] = validate(va_arg(args, char*));
    }
    va_end(args);
    return data;
}
