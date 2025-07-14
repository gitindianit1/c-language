#include<stdio.h>
int  main(){

int a = 10;
int b = 5;
printf("Before swapping two numbers\n");
printf("a = %d and b = %d",a,b);

// step:-1  using thrid variable;
// int c;
// c = a;  // 10
// a = b; // 5
// b = c;  // 10
// printf("\nAfter swapping two number\n");
// printf("a = %d and b = %d",a,b);


// step:- 2  Without using third variable

a = a + b ; // 10 + 5 => 15
b = a-b; // 15 - 5 => 10
a = a - b; // 15 - 10 => 5
printf("\nAfter swapping two number\n");
printf("a = %d and b = %d",a,b);
}





