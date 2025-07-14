#include<stdio.h>

int main(){

// for loop
// int i = 0 ;
// for(i;i<=5;i++){
//     printf("\n%d:- ",i);
// }

// while loop
// while (i<=5){
//     printf("\n%d:- ",i);
//     i++;
// }

// while (i>5){
//     printf("\nwhile loop:- %d:- ",i);
//     i++;
// }

// do while ( at leaset one output will be print)
// do{
//      printf("\ndo while loop:- %d:- ",i);
//     i++;
// } while(i>5);

// do{
//      printf("\ndo while loop:- %d:- ",i);
//     i++;
// } while(i<=5);


// 5 - 0
int decriment = 5;
while (decriment>0){
    printf("\nwhile loop:- %d:- ",decriment);
    decriment--;
}
// 5 >0
// 4 > 0
// 3 > 0
// 2 > 0
// 1 >0

// factorial :-
// 5 => 5 * 4 * 3 * 2 *
// 10 => 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
float fact = 1;
int i = 1;
int n;
printf("\nEnter a number\n");
scanf("%d",&n);
for(i;i<=n;i++){
    fact *= i;
}
printf("\n factorial of a number %f:- ",fact);

}
