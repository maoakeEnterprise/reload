/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:33:10 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/04 16:15:11 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (i < ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "test";
	char	*s2;
	s2 = ft_strdup(s1);
	printf("%s\n", s2);
}*/
