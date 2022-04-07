#include <stdlib.h>
#include <stdio.h>

int		counter(long long int number)
{
	int		count;

	count = 0;
	if (number == 0)
		count++;
	if (number < 0)
	{
		number = number * -1;
		count++;
	}	
	while(number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int number)
{
	char		*str;
	long long int 	copy;
	int			count;

	copy = number;
	count = counter(copy);
	if (!(str = (char *)malloc((count + 1) * sizeof(char))))
		return(NULL);
	str[count--] = '\0';
	if (copy == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (copy < 0)
	{
		copy = copy * -1;
		str[0] = '-';
	}
	while(copy > 0)
	{
		str[count] = (copy % 10) + 48;
		copy = copy / 10;
		count--;
	}
	return (str);
}

int main(void)
{
	char	*p;

	p = ft_itoa(2147483647);
	printf("%s\n", p);
	p = ft_itoa(-2147483648);
	printf("%s\n", p);
	p = ft_itoa(0);
	printf("%s\n", p);
	p = ft_itoa(-12345);
	printf("%s\n", p);
}
