/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:45:56 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/07 13:55:24 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 'z' ;
	while (n >= 'a')
	{
		write(1, &n, 1);
		n --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
