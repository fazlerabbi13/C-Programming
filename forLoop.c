#include <stdio.h>

int main() {
    int i,k;
    // outer
    for(i = 0; i<=4; i++) {
        printf("outer:%d\n", i);
    // inner
        for(k = 1; k<=4; k++){
            printf("inner:%d\n", k);
        }
    }
    return 0;
}