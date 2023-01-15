/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:27:20 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/10 14:03:42 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i ++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	a[]="hello";

	printf("%d", ft_str_is_alpha(a));
	}*/
