/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:51:28 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/28 20:03:28 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		i = 0;
		while (str[i + x] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str + x);
			else
				i++;
		}
		x++;
	}
	return (0);
}
