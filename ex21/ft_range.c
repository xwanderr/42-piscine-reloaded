/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:12:51 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 14:06:46 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		n;
	int		*res;

	if (min < max)
	{
		i = 0;
		n = max - min;
		if (!(res = (int*)malloc(sizeof(int) * n)))
			return (NULL);
		while (i <= n - 1)
		{
			res[i] = min;
			i++;
			min++;
		}
		return (res);
	}
	else
		return (NULL);
}
