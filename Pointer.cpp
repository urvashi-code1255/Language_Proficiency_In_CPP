#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int temp = *a + *b;
    *b = abs(*b - *a);  
    *a = temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

