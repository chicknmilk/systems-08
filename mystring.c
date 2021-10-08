#include <stdio.h>
#include "mystring.h"

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

int mystrcmp( char *s1, char *s2 ) {
  
  while (*s1) {
    if (*s2 == '\0') return 1;

    if (*s1 < *s2) return -1;
    else if (*s1 > *s2) return 1;

    s1++;
    s2++;
  }

  if (*s1 == *s2) return 0;
  return -1;
}

char * mystrchr( char *s, char c ) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }

    if (*(s + 1) == c && c == '\0') return s;

    return NULL;
}