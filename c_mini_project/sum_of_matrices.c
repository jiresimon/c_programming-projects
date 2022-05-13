#include <stdio.h>

/*
 * main - arithmetic operation of matrices (addition and subtraction) -- 2 dimensional array
 * return - 0
*/

int main(void)
{
    char op;
    int A[2][2] , B[2][2], C[2][2]; //matrix c is the result...
    
    printf("Enter '+' for addition or '-' for subtraction\n>>> ");
    printf("Enter the arithmetic operation you wish to perform\n>>> ");
    scanf("%c", &op);

    //taking input into matrix A
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            printf("Enter a number for the %d row, %d column into matrix A\n>>> ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    //taking input into matrix B
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            printf("Enter a number for the %d row, %d column into matrix B\n>>> ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    
    
    //using the switch keyword to compare with the arithmetic operator chosen above
    switch(op)
    {
        case '+':
            printf("Addition of the two matrices>>>\n");
            for(int i = 0; i < 2; ++i)
                for(int j = 0; j < 2; ++j)
                {
                    C[i][j] = A[i][j] + B[i][j];
                }
            break;
        
        case '-':
            printf("Subtraction of the two matrices>>>\n");
            for(int i = 0; i < 2; ++i)
                for(int j = 0; j < 2; ++j)
                {
                    C[i][j] = A[i][j] - B[i][j];
                }
            break;
        
        default:
            printf("Check the input again\n");
    }

    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
                printf("%d\t", C[i][j]);
                if (j==1)
                    printf("\n");
        }
    }

    return (0);
}