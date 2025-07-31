/*
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("1. BASIC ARRAY CONCEPTS\n");
    printf("----------------------\n");

    // Declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    float decimals[3] = {1.1f, 2.2f, 3.3f};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char *a[] = {"Tech","Programming","language","C","C++"};

    // Accessing elements
    printf("Integer array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Partial initialization
    int partial[10] = {1, 2, 3};  // Rest initialized to 0
    printf("Partial initialization: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", partial[i]);
    }
    printf("\n");

    // Size determination
    printf("Size of numbers array: %zu elements\n", sizeof(numbers)/sizeof(numbers[0]));

    // Memory layout
    printf("Memory addresses:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d at address %p\n", i, numbers[i], (void*)&numbers[i]);
    }
    printf("\n");

    return 0;
} */


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("1. Multi-Dimensional ARRAY CONCEPTS\n");
    printf("----------------------\n");

    float y[2][4] = {
    { 1,2,3,4},
    { 5,6,7,8}
    };

    printf("\n%1.f",y[0][1]);
    printf("\n%1.f",y[1][2]);
    printf("\n%1.f",y[1][1]);

// Change value
    y[1][0] = 56;
    printf("\n%1.f",y[1][0]);

  // 7 replace by 78
y[1][2] = 78;
printf("\n%1.f",y[1][2]);

    return 0;
}

/* Array user defined value:- */
#include <stdio.h>

int main() {
    // Write C code here
    printf("1. Multi-Dimensional ARRAY CONCEPTS\n");
    printf("----------------------\n");

    int n,m;
    printf("\nEnter array Rows and columns\n");
    // n => rows and m => column
    scanf("%d%d",&n,&m);
    int arr[n][m];

    for (int i= 0;i<n;i++){
        for(int j=0;j<m;j++){
            int ele;
            printf("Enter an element\n");
            scanf("%d",&ele);
            arr[i][j]=ele;
        }
    }

    printf("Print Array Element:- \n");
    for (int i= 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


