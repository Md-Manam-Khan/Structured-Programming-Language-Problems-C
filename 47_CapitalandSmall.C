#include <stdio.h>
#include <string.h>
int main()
{
    int i, length = 0;
    char manam[100];
    printf("Input a lowercase string: ");
    fgets(manam, sizeof(manam), stdin);
    for(i = 0; manam[i] != '\0'; i++)
    {
        if(manam[i] == '\n')
        {
            break;
        }
        ++length;
    }
    printf("Uppercase string: ");
    for(i = 0; i < length; i++)
    {
        if(manam[i] >= 'a' && manam[i] <= 'z')
        {
            printf("%c", manam[i] - 32);
        }
        else
        {
            printf("%c", manam[i]);
        }
    }
    printf("\nReversed string: ");
    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", manam[i]);
    }
    return 0;
}