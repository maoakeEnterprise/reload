/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:16:33 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/03 16:32:20 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("mine : %d\n", ft_strcmp(argv[1], argv[2]));
		printf("base : %d\n", strcmp(argv[1], argv[2]));
	}
}*/
