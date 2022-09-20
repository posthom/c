#include <stdio.h>
#include <stdlib.h>
#include "D:\Code\c\a.c"

void pp1(int a) {
    a++;
}
void pp2(int *p) {
    // *p = *p +100;
    // (*p)++;
    *p++;
}
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = a;
}
void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap3(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10,b=20;
    printf("%d,%d; %d,%d\n", &a, a,&b,b);
    swap1(a,b);
    printf("%d,%d; %d,%d\n", &a, a,&b,b);
    swap2(&a, &b);
    printf("%d,%d; %d,%d\n", &a, a,&b,b);
    swap3(&a, &b);
    printf("%d,%d; %d,%d\n", &a, a,&b,b);

    int *p = &a, *q=&b;
    printf("%d,%d; %d,%d\n", p,*p, q, *q);
    int *temp = p;
    p = q;
    q = temp;
    printf("%d,%d; %d,%d\n", p,*p, q, *q);

    int x = 10;
    printf("%d\n", x);
    pp2(&x);
    printf("%d\n", x);

}

/*
6422288,10; 6422284,20
6422288,10; 6422284,20
6422288,20; 6422284,10
6422288,20; 6422284,10
6422288,20; 6422284,10
6422284,10; 6422288,20
10
10
*/

