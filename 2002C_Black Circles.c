#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long ll;

typedef struct {
    ll first;
    ll second;
} Point;

int main() {
    ll t;
    scanf("%lld", &t);
    
    while (t--) {
        ll n;
        scanf("%lld", &n);
        
        Point* pts = (Point*)malloc(n * sizeof(Point));
        if (pts == NULL) {
            perror("error allocating memory");
            exit(EXIT_FAILURE);
        }

        for (ll i = 0; i < n; i++) {
            scanf("%lld %lld", &pts[i].first, &pts[i].second);
        }
        
        ll xs, ys, xd, yd;
        scanf("%lld %lld %lld %lld", &xs, &ys, &xd, &yd);
        
        ll d2 = (xd - xs) * (xd - xs) + (yd - ys) * (yd - ys);
        bool f = false;
        
        for (ll i = 0; i < n; i++) {
            ll dx = pts[i].first - xd;
            ll dy = pts[i].second - yd;
            if (d2 >= dx * dx + dy * dy) {
                f = true;
                break;
            }
        }
        
        printf("%s\n", f ? "NO" : "YES");
        
        free(pts);
    }

    return 0;
}
