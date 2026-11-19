/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cesar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:27:10 by romasant          #+#    #+#             */
/*   Updated: 2026/11/19 23:44:28 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CESAR_H
# define FT_CESAR_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*ft_cesar(char const *s, int key);
char	*ft_decesar(char const *s, int key);
int		ft_strlen(char const *s);
char	*ft_strdup(char const *s);

#endif
