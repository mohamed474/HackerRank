#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    
    if (a > b && a > c && a > d) {
        max = a;
    } else if (b > a && b > c && b > d) {
        max = b;
    } else if (c > a && c > b && c > d) {
        max = c;
    } else {
        max = d;
    }
    
    return max;
     
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));
     
    return 0;
}
