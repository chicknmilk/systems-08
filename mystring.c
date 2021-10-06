#include <stdio.h>
#include "mystring.h"

int main() {
    // char *str = "";

    // printf("%d\n", mystrlen(str));

    // char str1[10] = "hello";
    // char str2[5] = "bob";

    // mystrcpy(str1, str2);
    // mystrncpy(str1, str2, 2);

    // mystrcat(str1, str2);

    // char c = mystrchr(str1, 'o');

    // printf("%p\n", c);

    // printf("%s\n", str1);
}

int mystrlen( char *s ) {
    int len = 0;

    while (*s) {
        s++;
        len++;
    }

    return len;
}

char * mystrcpy( char *dest, char *source ) {
    char *ret = dest;

    while (*source) {
        *dest = *source;
        source++;
        dest++;
    }

    *dest = '\0';

    return ret;
}

char * mystrncpy( char *dest, char *source, int n) {
    char *ret = dest;

    int i;
    for (i = 0; i < n; i++) {
        dest[i] = source[i];
    }

    dest[n] = '\0';

    return ret;
}

char * mystrcat( char *dest, char *source ) {
    char *ret = dest;

    while (*dest) dest++;

    while (*source) {
        *dest = *source;
        source++;
        dest++;
    }

    *dest = '\0';

    return ret;
}

char * mystrchr( char *s, char c ) {
    char *ret;

    while (*s) {
        if (*s == c) ret = s;
        s++;
    }

    return ret;
}