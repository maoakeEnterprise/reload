/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:35:09 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 14:42:28 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
/*
int	main(void)
{
	ft_is_negative(43);
	ft_is_negative(0);
	ft_is_negative(-9);
}*/
