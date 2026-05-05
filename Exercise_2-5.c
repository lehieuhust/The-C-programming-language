#include <stdio.h>

int any(char s1[], char s2[]) {
    int i, k;

    for (i = 0; s1[i] != '\0'; i++) {
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    char source[] = "hello world";
    char search[] = "dfg";
    
    int location = any(source, search);
    
    if (location != -1) {
        printf("First match found at index: %d (character '%c')\n", location, source[location]);
    } else {
        printf("No matches found.\n");
    }

    return 0;
}
