#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int words = 0, lines = 0, characters = 0;
    char ch, prev_ch = '\0';

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch) && !isspace(prev_ch)) {
            words++;
        }

        prev_ch = ch;
    }

    if (!isspace(prev_ch)) {
        words++;
    }

    if (characters > 0 && prev_ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
