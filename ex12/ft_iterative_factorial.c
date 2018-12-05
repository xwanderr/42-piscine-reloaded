/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:43:38 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 10:27:22 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int o;
	int n;

	n = 1;
	o = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (n <= nb)
	{
		o *= n;
		n++;
	}
	return (o);
}
