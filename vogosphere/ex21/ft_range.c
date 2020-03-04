/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:11:53 by jjerde            #+#    #+#             */
/*   Updated: 2018/11/27 22:04:21 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (max <= min)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	i = min;
	while (i < max)
	{
		arr[i - min] = i;
		i++;
	}
	arr[i - min] = '\0';
	return (arr);
}
