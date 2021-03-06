/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 07:52:54 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/27 09:05:28 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ('a' <= str[i] && str[i] <= 'z')
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
