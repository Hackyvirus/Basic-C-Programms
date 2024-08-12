#include <stdio.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source file> <destination file>\n", argv[0]);
        return 1;
    }

    FILE *sourceFile = fopen(argv[1], "r");
    FILE *destFile = fopen(argv[2], "w");

    if (sourceFile == NULL || destFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (is_vowel(ch)) {
            fputc(toupper(ch), destFile);
        } else if (isalpha(ch)) {
            fputc(tolower(ch), destFile);
        } else {
            fputc(ch, destFile);
        }
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File contents copied with case modification.\n");

    return 0;
}
