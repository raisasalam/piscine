/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:02:23 by rsalam            #+#    #+#             */
/*   Updated: 2022/08/24 15:01:24 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;

	if (min >= max)
	{
		return (0);
	}
	r = malloc((max - min) * sizeof(int));
		if (r == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		r[i] = min;
		i ++;
		min ++;
	}
	return (r);
}
/*int main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/	
