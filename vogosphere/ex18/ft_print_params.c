/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:55:19 by jjerde            #+#    #+#             */
/*   Updated: 2018/11/27 19:03:31 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
