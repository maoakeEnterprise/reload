/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:15:16 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 16:28:07 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ftt_sqrt(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i < i)
		return (0);
	if (i * i <= nb)
		return (ftt_sqrt(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (ftt_sqrt(nb, 1));
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	}
}*/
