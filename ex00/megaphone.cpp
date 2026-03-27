#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	j;
	int	i;

	j = 1;
	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (j < ac)
		{
			i = 0;
			while (av[j][i])
			{
				std::cout << static_cast<char>(std::toupper(av[j][i]));
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
