#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Get the key 
int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("A valid key");
        return 1;
    }
    else
    {
        // String to an integer
        int k = atoi(key) % 26;
        
        // Valid key check
        if (k == 0)
        {
            printf("Invalid key. \n");
            return 1;
        }
    
        // Text Encryption
        string inp = GetString();
        if (inp != NULL)
        {
            for (int i = 0, n = strlen(inp); i < n; i++)
            {
                int c = 0;    
                if (isupper(inp[i]))
                {
                   
                    c = (((int)inp[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) c);
                }
                else if (islower(inp[i]))
                {
                    
                    c = (((int)inp[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) c);
                }
                else
                {
                    printf("%c", inp[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }
}
   