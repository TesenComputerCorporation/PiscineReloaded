/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:21:34 by jjerde            #+#    #+#             */
/*   Updated: 2018/11/27 21:28:18 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 512
#include "header.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		link;
	char	bufff[BUFF_SIZE + 1];
	int		bites;

	if (argc == 2)
	{
		link = open(argv[1], O_RDONLY);
		if (link == -1)
			return (0);
		bites = read(link, bufff, BUFF_SIZE);
		while (bites)
		{
			bufff[bites] = '\0';
			ft_putstr(bufff);
			bites = read(link, bufff, BUFF_SIZE);
		}
		close(link);
	}
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
