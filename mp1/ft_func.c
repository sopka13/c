/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:57:17 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/13 10:10:28 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void ft_func(int *a, char *f)
{
	int c;
	c = *a * 2;
	*a = c;
	char d[] = "World";

	int i = 0;
	while (d[i] != '\0')
	{
		f[i + 5] = d[i];
		i++;	
	}
}
