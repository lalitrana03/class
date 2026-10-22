#include <stdio.h>

int main() {
    int n, i, key, pos = -1;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Found at index %d", pos);
    else
        printf("-1");

    return 0;
}