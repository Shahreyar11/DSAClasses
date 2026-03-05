#include<stdio.h>
int main(){
    // int x, y, z;
    // z = scanf("%d%d", &x, &y);
    // printf("%d", z); //2
    // return 0;

    int x = 156, y = 234;
    printf("%d\n", x);
    x = printf("%d", y); // this prints 2 as 23 has 2 characters, But if we write \n ith %d it will count as a character
    printf("%d", x);
    return 0;
}