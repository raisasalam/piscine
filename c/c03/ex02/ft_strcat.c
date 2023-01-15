/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:12:22 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/13 09:48:32 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char s[] = "fgd";
	char d[] = "234";
	printf("%s\n", ft_strcat(s, d));
}*/
