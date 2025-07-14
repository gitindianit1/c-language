#include<stdio.h>
int main(){

int n;
int i = 0;
printf("Enter a number\n");
scanf("%d",&n);

float sum = 0;
// sum of all even number
// for(i;i<=n;i++){
//         if(i%2==0){
//             //sum = sum + i
//             sum += i;
//         }
// }
// // 0 + 2 + 4
// printf("Sum of all even  number between 1 -100 :- %f\n",sum);


for(i;i<=n;i++){
        if(i%2!=0){
            //sum = sum + i
            sum += i;
        }
}
// 0 + 2 + 4
printf("Sum of all even  number between 1 -100 :- %f\n",sum);
}
