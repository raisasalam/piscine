/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:42:26 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/15 20:28:58 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
		return (index);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index -2)));
}
/*int main()
{
	printf("%i", ft_fibonacci(2));
}*/
