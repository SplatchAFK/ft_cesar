/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cesar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:26:33 by romasant          #+#    #+#             */
/*   Updated: 2026/11/19 23:51:29 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cesar.h"

char	*ft_cesar(char const *s, int key)
{
	int (i) = 0;
	char	*s_code;

	if (!s)
		return (NULL);
	s_code = malloc(sizeof * s_code * (ft_strlen(s) + 1));
	if (!s_code)
	{
		free(s_code);
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'm')
		{
			s_code[i] = s[i] + key;
		}
		i++;
	}
	return (s_code);
}
