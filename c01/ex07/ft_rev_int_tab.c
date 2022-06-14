/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:55:08 by ajafy             #+#    #+#             */
/*   Updated: 2021/06/28 13:06:11 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabp[60];
	int	i ;
	int	j ;

	i = 0 ;
	j = size - 1;
	while (i <= size - 1)
	{
		tabp[i] = tab[j];
		i++;
		j--;
	}
	i = 0 ;
	while (i <= size - 1)
	{
		tab[i] = tabp[i];
		i++;
	}	
}