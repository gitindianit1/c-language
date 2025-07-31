#include <stdio.h>

int main() {
    // Write C code here
    printf("1. Multi-Dimensional 3-D ARRAY CONCEPTS\n");
    printf("----------------------\n");

    int test[2][3][4] ={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {12,11,10,9},
            {8,7,6,5},
            {4,3,2,1}

        }
    };

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0; k<4;k++){
                printf("%d ",test[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}




