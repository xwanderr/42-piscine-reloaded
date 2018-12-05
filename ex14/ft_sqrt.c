/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:11:33 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 13:34:09 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int add;
	int count;

	add = 1;
	count = 0;
	while (nb > 0)
	{
		nb -= add;
		add += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}
