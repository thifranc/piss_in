/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 22:06:00 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 11:49:26 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index]
			&& (s1[index] != '\0' || s2[index] != '\0'))
		index++;
	if (s1[index] == '\0')
		return (-s2[index]);
	if (s2[index] == '\0')
		return (s1[index]);
	return (s1[index] - s2[index]);
}
