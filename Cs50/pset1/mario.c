#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int c=1;
    
    while(c==1)
    {
        printf("height: ");
        int height = GetInt();
        
        if(height <=23 && height >=0)
        {
            for (int i = 0; i < height; i++)
            {
                int hashes = (i + 2);
                int spaces = ((height + 1) - hashes);
                
                for (int j = 0; j < spaces; j++) 
                { 
                    printf(" ");
                }  
                
                for (int k = 0; k < hashes; k++) 
                {
                    printf("#");
                }
                
                printf("\n");
            }
            c=0;
        }
    }
}
