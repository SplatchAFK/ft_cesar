/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cesar_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:27:13 by romasant          #+#    #+#             */
/*   Updated: 2026/11/19 23:48:09 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cesar.h"

int	ft_strlen(char const *s)
{
	int (i) = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char const *s)
{
	int (i) = 0;
	char	*s_dup;

	s_dup = malloc(sizeof * s_dup * (ft_strlen(s) + 1));
	while (s[i])
	{
		s_dup[i] = s[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
