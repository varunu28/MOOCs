//Points in a line
/*
Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall on one 
straight line.

INPUT: Six integers x1, y1, x2, y2, x3, y3 separated by whitespace.

OUTPUT: Print “Yes” if all the points fall on straight line, “No” otherwise.

CONSTRAINTS: 
-1000 <= x1, y1, x2, y2, x3, y3 <= 1000
*/

#include <stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    
    float a=0.5*((x1-x2)*(y1-y3)-(x1-x3)*(y1-y2));
    if(a==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}


