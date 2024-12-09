#include <stdio.h>
#include <stdbool.h>

bool	is_parentheses_balanced(void)
{
	int	parentheses_opened;
	int	parentheses_closed;
	char	c;

	parentheses_opened = 0;
	parentheses_closed = 0;
	c = '\0';

	while (c != '\n')
	{
		scanf("%c", &c);
		if (c == '(')
		{
			parentheses_opened++;
		}
		else if (c == ')')
		{
			parentheses_closed++;
			if (parentheses_closed > parentheses_opened)
			{
				return (false);
			}
		}
	}

	if (parentheses_opened == parentheses_closed)
	{
		return (true);
	}

	printf("The number of opened parentheses is: %d\n", parentheses_opened);
	printf("The number of closed parentheses is: %d\n", parentheses_closed);

	return (false);
}

int	main(void)
{
	printf("Please enter a sentence with parentheses () : ");

	if (is_parentheses_balanced())
	{
		printf("All parentheses are balanced\n");
	}
	else
	{
		printf("One or more parentheses are not balanced\n");
	}

	return (0);
}