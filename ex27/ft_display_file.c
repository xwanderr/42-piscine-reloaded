/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:28:07 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/24 15:52:32 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_display_file(char *av)
{
	int		f;
	int		f1;
	char	buff[BUFF_SIZE + 1];

	f1 = 0;
	f = open(av, O_RDONLY);
	while ((f1 = read(f, buff, BUFF_SIZE)))
	{
		buff[f1] = '\0';
		ft_putstr(buff);
	}
	close(f);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (ac == 2)
		ft_display_file(av[1]);
	return (0);
}
