/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:52:53 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 14:58:21 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 4;
	b = 2;
	div = 0;
	mod = 9877;
	printf("div: %d, mod: %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
}*/
