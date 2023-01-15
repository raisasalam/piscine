/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:02:59 by rsalam            #+#    #+#             */
/*   Updated: 2022/10/03 16:20:36 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	k = 0;
	s = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[k++] = sep [j++];
		}
		i ++;
	}
	s[k] = '\0';
	return (s);
}
#include<stdio.h>
int main()
{
	char *strs[10] = {"abc", "xyz","peke","jofofj"};
	char *s;
	s = ft_strjoin(4, strs,"+");
	printf("%s",s);
}
