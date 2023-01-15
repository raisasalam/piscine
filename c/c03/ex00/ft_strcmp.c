/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:20:03 by rsalam            #+#    #+#             */
/*   Updated: 2022/09/27 15:49:39 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s[] = "fgd";
	char d[] = "mak";
	printf("%d\n",strcmp(s,d));
	printf("%d\n", ft_strcmp(s, d));
}
