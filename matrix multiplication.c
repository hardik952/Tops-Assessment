// Write a program to make multiplication of 2-D Matrix.
#include<stdio.h>
int matrix(int m[2][2]);  // function to get matrix elements entered by the user
int multiply(int a[2][2],int b[2][2]);   // function to multiply two matrices
int main()
{
	int i,j,k,a[2][2],b[2][2];
	 // get elements of the first matrix
	printf("----------------Matrix 1------------\n\n");
	matrix(a);
	 // get elements of the first matrix
	printf("\n----------------Matrix 2------------\n\n");
	matrix(b);
	// multiply two matrices.
    printf("\n------------Multiplication of Matrix------------\n\n");
    multiply(a,b);
	return 0;
}
// function Definations :-
// for elements 
int matrix(int m[2][2])
 {
    int i,j;
 	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		{
	    printf("Enter the element: ");
	    scanf("%d",&m[i][j]);
        }    
    }
    for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		{
	    printf("\t%d ",m[i][j]);
        }    
        printf("\n");
    }
    return m[i][j];
}
// for multiplication
int multiply(int a[2][2],int b[2][2])
{
	int i,j,k,c[i][j];
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = 0;
            for(k=0;k<2;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return c[i][j];
}
