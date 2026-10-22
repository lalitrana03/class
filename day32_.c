#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);

    while(n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int max = freq[0], digit = 0;

    for(int i = 1; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }

    printf("%d", digit);

    return 0;
}