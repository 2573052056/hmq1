/*************************************************************************
	> File Name: 111.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时41分20秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a;
    double b;
    scanf ("%d", &a);
    if (a <= 3) {
        b = 13 + 1;
        printf ("%g", b);
    }else {
        b = 13 + 1 + (a - 3) * 2.3;     
        printf ("%.1lf", b);
    }
    return 0;
}
