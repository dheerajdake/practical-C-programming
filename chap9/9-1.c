#include<stdio.h>
#include<string.h>
//words are group of letters seperated by a single space

const char * sentence = "Adventure is out there";

int countWords(const char * sentence)
{
    int space = 0;
    for(int a=0; a<strlen(sentence); a++)
    {
        if(sentence[a] == ' ')
        {
            space++;
        }
    }
    return space+1;
}

int main()
{
    printf("Words: %d\n", countWords(sentence));
    return 0;
}
