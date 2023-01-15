/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:55:14 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/07 13:57:32 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	n ;

	n = 'a' ;
	while (n <= 'z')
	{
		write (1, &n, 1);
		n ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
