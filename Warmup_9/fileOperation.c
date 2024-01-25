#include <stdio.h>


int main(){
    char fileName[] = "./Warmup_9/example.txt";
    FILE *file;
    file = fopen(fileName, "w");
    fprintf(file, "Hello, World!");
    fclose(file);

    file = fopen(fileName, "r");
    // below here is generative ai
    char buffer[1024]; 
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
    fwrite(buffer, 1, bytesRead, stdout);
    }
    // end of generative ai use
    fclose(file);
}