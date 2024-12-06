#include <stdio.h>

char    *ft_strpbrk(char *str, char *to_find)
{
    int i;
    int x;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (x = 0; to_find[x] != '\0'; x++)
        {
            if (str[i] == to_find[x])
                return (str + i);
        }
    }
    return (NULL);
}

int main(void)
{
    char chaine[] = "Hello";
    char *c = ft_strpbrk(chaine, "aeiouy");

    if (c != NULL)
    {
        printf("The first letter of the string `%s' is: %c\n", chaine, *c);
    }

    return (0);
}