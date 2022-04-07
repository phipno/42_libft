#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	str = malloc((i + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char s[] = "Hi there";
	char *p;

	printf("%s\n", p = ft_strmapi(s, fuck that)
}
