#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int f = n%10000;
    int g = n/10000;
    int h = f/1000;
    int i = f%1000;
    int j = i/100;
    int k = i%100;
    int l = k/10;
    int m = k%10;
    int sum = g+h+j+l+m;
    printf("%d", sum);
    return 0;
}