#include <stdio.h>
int main() {
    int i = 1;     
    int num = 1;   
    int sum = 0;
    while (i <= 20) {
        sum = sum + num;
        num = num + 2;   
        i++;
    }
    printf("%d", sum);
    return 0;
}