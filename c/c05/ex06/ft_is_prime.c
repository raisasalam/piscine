/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:44:26 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/15 20:32:12 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n ++;
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_is_prime(1));
			}*/
