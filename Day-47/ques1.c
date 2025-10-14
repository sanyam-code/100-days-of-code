//Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int i, j, flag = 1, used[100] = {0};

    if (strlen(str1) != strlen(str2)) {
        printf("Nah, not anagrams \n");
        return 0;
    }

    for (i = 0; str1[i]; i++) {
        int found = 0;
        for (j = 0; str2[j]; j++) {
            if (!used[j] && str1[i] == str2[j]) {
                used[j] = 1;
                found = 1;
                break;
            }
        }
        if (!found) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Yes, they are anagrams \n");
    else
        printf("Nah, not anagrams \n");

    return 0;
}
