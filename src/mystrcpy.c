#include <stdio.h>
int mystrcpy()
 {
    char s1[100]="program", s2[100], i;

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}