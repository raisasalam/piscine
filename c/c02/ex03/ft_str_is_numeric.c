/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:06:43 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/11 09:02:54 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i ++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	char	a[]="234";

	printf("%d", ft_str_is_numeric(a));
	}*/
