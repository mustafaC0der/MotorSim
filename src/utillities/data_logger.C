#include <stdio.h>

void log_data(const char *filename, double data) {
    FILE *file = fopen(filename, "a");
    if (file) {
        fprintf(file, "Data: %.2f\n", data);
        fclose(file);
    } else {
        printf("Error: Unable to open file %s\n", filename);
    }
}
