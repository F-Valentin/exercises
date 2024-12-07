#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y] && to_find[y] != '\0')
		{
			y++;
		}
		if (to_find[y] == '\0')
		{
			return (&str[x]);
		}
		x++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	char	*p;

	str = "Hello, everybody";
	p = ft_strstr(str, "every");
	if (p != NULL)
		printf("The string `%s' contains the string `%s'\n", str, p);
	return (0);
}
