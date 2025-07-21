// Online C compiler to run C program online
#include <stdio.h>

int main() {

//int mark[5] = {19, 10, 8, 17, 9};
int mark[] = {19, 10, 8, 17, 9};

int size = sizeof(mark) / sizeof(mark[0]);

// // change the value of the third element to -1
// mark[2] = -1;
// // change the value of the fifth element to 0
// mark[4] = 0;

// take input and store it in the 3rd element
printf("Enter new 3rd element\n");
scanf("%d", &mark[2]);

// take input and store it in the ith element
printf("Enter new the ith element\n");
scanf("%d", &mark[size-1]);

int i =0;
for(i;i<size;i++){
    printf("%d ",mark[i]);
}

return 0;
}
