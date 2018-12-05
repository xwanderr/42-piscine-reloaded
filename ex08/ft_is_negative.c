/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:02:20 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 10:51:17 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		ft_putchar(c);
	}
	else if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
}
