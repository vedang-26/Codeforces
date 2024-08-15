#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--)
    {
    char a[3];
    char b[3];
    char c;


    for(int i = 0; i < 3; i++) {
        scanf(" %c", &a[i]);  
    }


    for(int i = 0; i < 3; i++) {
        scanf(" %c", &b[i]);  
    }

    c = a[0];
    a[0] = b[0];
    b[0] = c;

    for(int i = 0; i < 3; i++) {
        printf("%c", a[i]);
    }
    printf(" ");
    for(int i = 0; i < 3; i++) {
        printf("%c", b[i]);
    }printf("\n");
    }

    return 0;
}
