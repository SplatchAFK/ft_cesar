/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:34:22 by romasant          #+#    #+#             */
/*   Updated: 2026/11/19 23:35:38 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cesar.h"

int	main(int ac, char **av)
{
	(void) ac;
	printf("Voici la string chiffre : %s\n", ft_cesar(av[1], atoi(av[2])));
	
	return (0);
}
