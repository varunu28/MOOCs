//Print Elements of a Matrix in Spiral Order
/*
Write a program that reads an MxN matrix A and prints its elements in spiral order.
You should start from the element in the 0th row and 0th column in the matrix and proceed in a spiral order as shown
below.

1→  2 → 3 →  4                       
                          ↓
5 → 6 →  7      8 
↑                ↓      ↓
9      10←11    12
↑                        ↓
13←14←15←16

Output for the above matrix: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

INPUT:
First line contains two integers M and N separated by whitespace. The next M lines contain elements of matrix A, 
starting with the topmost row. Within each row, the elements are given from left to right.
OUTPUT:
Elements of the matrix printed in a spiral order. All the elements should be separated by whitespace.
CONSTRAINTS:
1 <= M <= 5, 1 <= N <= 5.
Elements in the matrix will be in the range [-100,100]

*/

#include <stdio.h>
 
void spiral(int m, int n, int a[m][n])
{
    int i, k = 0;
    int l = 0;
 
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;
 
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;

        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
 
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}
 
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 
    spiral(m,n, a);
    return 0;
}