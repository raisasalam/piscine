/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:56:54 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/24 12:24:56 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ret;

	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	ret = malloc((max - min) * sizeof(int));
	if (ret == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		i ++;
		min ++;
	}
	*range = ret;
	return (i);
}
/*#include<stdio.h>
int main()
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
