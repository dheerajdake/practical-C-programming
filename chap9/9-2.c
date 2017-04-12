#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool begin(char * s1, char * s2)
{
    return strstr(s1,s2);
}

int main()
{
    printf("Match: %s\n", begin("Apple", "Grape")?"True":"False");
    return 0;
}
