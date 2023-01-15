/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:22:58 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/09 12:22:26 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}

/*int main()
{
	int	a;
	int	b;
	int div;
	int mod;
	
	a = 14;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}*/
