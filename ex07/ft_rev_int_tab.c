/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:36 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/03 19:48:26 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp[size];

	i = 0;
	j = 0;
	while (i < size)
	{
		tmp[size - i - 1] = tab[i];
		i++;
	}
	while (j < size)
	{
		tab[j] = tmp[j];
		j++;
	}
}
