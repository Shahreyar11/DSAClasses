#include <stdio.h>

int main() {
    int x = 4, y, z;
    
    y = -x;
    z = x--;
    
    printf("%d %d %d", x, y, z);
    
    return 0;
}

// this will give 3 -4 and 4 as x-- is a post decrement so afterwards it will change x to 3 as 4-- is 3
// but the time z is assigned it is assigned as x so it will be same 4

