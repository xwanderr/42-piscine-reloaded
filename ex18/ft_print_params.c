/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 11:13:26 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 12:15:07 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_params(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int i;

	if (ac < 2)
		return (0);
	i = 1;
	while (av[i])
	{
		ft_print_params(av[i]);
		i++;
	}
	return (0);
}
