/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:47:01 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 14:51:49 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 23;
	printf("a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}*/
