//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The cyberpunk world is wild";
    char word[100], longest[100] = "";
    int i = 0, j = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
        if (str[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
