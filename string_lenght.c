#include <stdio.h>
#include <stdlib.h>

int string_lenght(char *str)
{
    int i = 0;
    while(*(str + i ) != '\0')
        i++;
    return i;

}
int main(void)
{
    char string[20];

    printf("Enter a string:\n");
    gets(string);
    printf("%d",string_lenght(string));


    return (0);
}
