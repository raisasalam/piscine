/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:56:26 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/16 12:44:22 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (1 < ac)
	{
		while (j < ac)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i ++;
			}		
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}