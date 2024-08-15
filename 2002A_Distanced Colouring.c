#include <stdio.h>
int main() 
{
    long long int n;
    scanf("%lld", &n);
    while (n--) {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long int min_ab = a < c ? a : c;
        long long int min_bc = b < c ? b : c;
        printf("%lld\n", min_ab * min_bc);
    }
    return 0;
}