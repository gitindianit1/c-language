// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int secret = 8;
    int i = 0;
printf("Welcome to the Number Guessing Game!\n");
printf("Guess a number between 1 and 10\n");

while(1){
  int num; 
  printf("Enter your guess: ");
  scanf("%d",&num);
  i += 1;
  if (num ==secret){
    printf("🎉 Correct! You guessed the number in attempts %d",i);
    break;
  }
  else if (num > secret){
      printf("Too high! Try again.");
  }
  else{
    printf("Too low! Try again.:");
}

}

}

