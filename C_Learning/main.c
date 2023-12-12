#include <stdio.h>
#include <string.h>

#define N 500

char path[N];
int n, left, right;

void brac(int k){
    if (k == 2 * n) {
        puts(path);
        return;
    }
    if (left < n) {
        path[k] = '(';
        left++;
        brac(k + 1);
        left--;
    }
    if (right < left) {
        path[k] = ')';
        right++;
        brac(k + 1);
        right--;
    }
}