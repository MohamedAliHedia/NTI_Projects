#include <stdio.h>


int max_of_four(int a, int b, int c, int d);
int max_of_four(int a, int b, int c, int d)
{
int z=0;
z+=a;
a+=b;
z+=c;
z+=d;
return max(z);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}