/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:44:23 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 16:53:37 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}

void	ft_swap(char *s1, char *s2)
{
	char	*tmp;

	if (ft_strcmp(s1, s2) > 0)
	{
		tmp = s1;
		s1 = s2;
		s2 = tmp;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{

			i++;
		}
	}
}
