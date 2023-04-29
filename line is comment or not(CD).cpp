#include<stdio.h>
#include<string.h>
int main() {
    char line[100];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    
    if (strncmp(line, "//", 2) == 0 || strncmp(line, "/*", 2) == 0) {
        printf("The given line is a comment.\n");
    } else {
        printf("The given line is not a comment.\n");
    }
    
    return 0;
}
