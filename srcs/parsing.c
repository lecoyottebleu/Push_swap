/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:04:16 by mlancelo          #+#    #+#             */
/*   Updated: 2024/11/26 22:05:07 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libswap.h"
static int	check_duplicate(t_list **pile_a, t_list *new)
{
	t_list	*tmp;

	if (!*pile_a)
		return (1);
	tmp = *pile_a;
	while (tmp != NULL)
	{
		if (tmp->content == new->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static int clear_lst(t_list **pile_a)
{
	ft_lstclear(&*pile_a);
	return (0);
}
static int	creat_arg(char *arg, t_list **pile_a)
{
	int	nb;
	t_list	*new;
	int		test;
	nb = ft_atoi(arg);
	printf("%d\n", nb);
	new = ft_lstnew(nb);
	if (new)
	{
		test = check_duplicate(&*pile_a, new);
		if (test == 0)
			return (0);
	}
	ft_lstadd_back(&*pile_a, new);
	free (new);
	return (1);
}
void	print_list(t_list *pile)
{
	while (pile)
	{
		printf("%d -> ", pile->content);
		pile = pile->next;
	}
	printf("NULL\n");
}

int	check(int argc, char **argv)
{
	int		i;
	size_t	y;
	t_list	*pile_a;

	pile_a = NULL;
	i = 1;
	while (i < argc && (argv[i] != NULL))
	{
		y = 0;
		while ((argv[i] != NULL) && (argv[i][y] != '\0'))
		{
				if (!(argv[i][y] >= '0' && argv[i][y] <= '9'))
					return (0);
				if (argv[i][y] >= '0' && argv[i][y] <= '9')
					y++;
		}
		if (argv[i] != NULL)
		{
			y = creat_arg(argv[i], &pile_a);
			if (y == 0)
				return (clear_lst(&pile_a));
		}
		i++;
	}
	print_list(pile_a);
	return (1);
}

