/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:28:13 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/04 09:28:15 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 1, j = 1, k;
	if (ac >= 1)
	{
		while (av[i])
		{
			k = remove(av[i]);
			if (k == 0)
				j += 1;
			i++;
		}
	}
	if (ac == j)
		printf("%d/%d of files deleted successfuly.\n", ac - 1, j - 1);
	else
	{
			printf("%d of file was not deleted, maybe you entred files doesn't exist in this current\n", ac - j);
			exit(1);
	}
} 