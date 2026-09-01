#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0;
    char manam[200], word[100], result[200];
    printf("Input a sentence: ");
    fgets(manam, sizeof(manam), stdin);
    printf("Input the word to remove: ");
    fgets(word, sizeof(word), stdin);
    manam[strcspn(manam, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    char *token = strtok(manam, " ");
    while(token != NULL)
    {
        if(strcmp(token, word) != 0)
        {
            if(j > 0)
            {
                result[j++] = ' ';
            }
            for(i = 0; token[i] != '\0'; i++)
            {
                result[j++] = token[i];
            }
        }
        token = strtok(NULL, " ");
    }
    result[j] = '\0';
    printf("Sentence after removing the word: ");
    puts(result);
    return 0;
}