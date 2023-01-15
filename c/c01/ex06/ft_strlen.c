                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:41:59 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/09 11:40:11 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*int	main ()
{
	char	str[]  = "hello";
	int	count = ft_strlen(str);

	printf("%d", count);
}*/	
