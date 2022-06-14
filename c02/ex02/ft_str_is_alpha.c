/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:01:50 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/04 11:26:48 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122 )
		{
			return (0);
		}
		else if (str[i] > 90 && str[i] < 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}