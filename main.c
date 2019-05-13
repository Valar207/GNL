/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:30:32 by vrossi            #+#    #+#             */
/*   Updated: 2019/05/13 10:52:21 by vrossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int                    main(int argc, char **argv)
{
	char            *line;
	int                fd1;
	int                fd2;

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while (get_next_line(fd1, &line))
	{
		ft_putendl(line);
		ft_strdel(&line);
	}

	get_next_line(fd2, &line);
	ft_putendl(line);
	ft_strdel(&line);
	/*get_next_line(fd1, &line);
	printf("%s\n", line);
	free(line);

	get_next_line(fd2, &line);
	printf("%s\n", line);
	free(line);*/
	return (0);
}
