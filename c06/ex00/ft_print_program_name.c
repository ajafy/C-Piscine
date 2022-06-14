/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:07:46 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/11 15:40:29 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	main(int ac, char**av)
{
	int		i;
	char	c;

	i = 0;
	if (ac > 0)
	{
		while (av[0][i] != '\0')
		{
			c = av[0][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
