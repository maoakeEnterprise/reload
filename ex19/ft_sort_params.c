/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 13:07:34 by jterrazz          #+#    #+#             */
/*   Updated: 2025/11/03 23:07:06 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **argv, int i, int j)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[j];
	argv[j] = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_params(int len, char **argv)
{
	int		i;

	i = 1;
	while (i < len -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(argv, i, i + 1);
			i = 1;
		}
		else
		{
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_params(argc, argv);
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
