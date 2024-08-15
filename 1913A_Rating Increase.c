#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char ab[9]; 
        scanf("%s", ab);
        int len = strlen(ab);
        int found = 0;
        for (int i = 1; i < len; i++) {
            char a[9], b[9];
            strncpy(a, ab, i);
            a[i] = '\0'; 
            strcpy(b, ab + i);
            int a_int = atoi(a);
            int b_int = atoi(b);
            if ((a[0] != '0') && (b[0] != '0') && (a_int > 0) && (b_int > 0) && (b_int > a_int)) {
                printf("%d %d\n", a_int, b_int);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("-1\n");
        }
    }

    return 0;
}
