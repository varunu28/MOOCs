#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    int n = strlen(name)+1;
    
    printf("%c",toupper(name[0]));
    for(int i=0;i<n;i++)
    {
        if(isspace(name[i]))
        {
            printf("%c",toupper(name[i+1]));
        }
    }
    printf("\n");
    
    return 0;
}
