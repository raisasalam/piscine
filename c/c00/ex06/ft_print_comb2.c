/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:57:06 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/23 14:25:17 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_comb(int a, int b, int last)
{
	int	j;
	int	k;
	int	l;
	int	i;

	i = (48 + a / 10);
	j = (48 + a % 10);
	k = (48 + b / 10);
	l = (48 + b % 10);
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (last)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void )
{
	int	a;
	int	b;
	int	last;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = ! (a == 98 && b == 99);
			ft_write_comb(a, b, last);
			b ++;
		}
		a ++;
	}
}
/*int main(void)
{
	
	ft_print_comb2();
	return(0);
}*/
