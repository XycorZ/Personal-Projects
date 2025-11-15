#include <stdio.h>


int main(void){
    int A,B,C,D;
   
    printf("Enter integer value for your 2x2 matrix: ");
    scanf("%d",&A);
    printf("Enter integer value for your 2x2 matrix: ");
    scanf("%d",&B);
    printf("Enter integer value for your 2x2 matrix: ");
    scanf("%d",&C);
    printf("Enter integer value for your 2x2 matrix: ");
    scanf("%d",&D);

    int matrix[2][2]={
        {A,B},
        {C,D}
    };

    int detM = A*D - B*C;

    int flop[2][2] = {
        {D,-B},
        {-C,A}
    };

    float inverse[2][2];

    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            inverse[i][j]= flop[i][j]* (1.0f/detM);
        }
    }

    printf("Inverse matrix:\n");
    printf("%f  %f\n", inverse[0][0], inverse[0][1]);
    printf("%f  %f\n", inverse[1][0], inverse[1][1]);

    return 0;

}
