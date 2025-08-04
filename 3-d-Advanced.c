// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("3-D Array:- \n");

int n,m,l;
printf("Enter size of 3-D Dimensional\n");
scanf("%d%d%d",&n,&m,&l);
int arr[n][m][l]; // 2 , 3 , 4

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
            printf("Enter Array value:- %d %d %d\n",i,j,k);
            int num;
            scanf("%d",&num);
            arr[i][j][k] = num;
        }
    }
}

printf("Display Output:-\n");
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
            // printf("Array value:-\n");
            printf("%d ",arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

// Changed the Value by user:
printf("Enter your dimensional\n");

int x,y,z,num;
scanf("%d%d%d",&x,&y,&z);
printf("Enter your value:-");
scanf("%d",&num);
arr[x][y][z] = num;

printf("Display Output:-\n");
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
            // printf("Array value:-\n");
            printf("%d ",arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

return 0;
}
