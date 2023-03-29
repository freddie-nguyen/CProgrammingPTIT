#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n], b[1000] = {0};
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int count = 0;
    for (i = 0; i < n ; i++) {
        int moreThan1 = 0;
        for (j = i+1; j < n; j++) {
            if(a[i]==a[j]) {
                moreThan1++;
            }
        }
        if(moreThan1==1) {
            count++;
        }
    }
    printf("%d\n", count);
    for (i = 0; i < n; i++) {
        if(b[a[i]]>1) {
            printf("%d ", a[i]);
            b[a[i]]=0;
        }
    }
}
