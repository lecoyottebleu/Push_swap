/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:27:12 by mlancelo          #+#    #+#             */
/*   Updated: 2024/11/26 21:50:09 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libswap.h"

// t_list	*new_node(int value)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = value;
// 	node->next = NULL;
// 	return (node);
// }



// void	push(t_list **pile, char *value)
// {
// 	t_list	*node;

// 	node = new_node(value);
// 	if (!node)
// 		return ;
// 	node->next = *pile;
// 	*pile = node;
// }

int	main(int argc, char **argv)
{
	// t_list	*pile_a;
	// t_list	*pile_b;
	int test;
	// pile_a = NULL;
	// pile_b = NULL;
	test = check(argc, argv);
	if (test == 0)
	{
		ft_putstr_fd("ERROR\n", 1);
		return (0);
	}
	printf("executer\n");
	// print_list(pile_a);
	// printf("Pile B avant:\n");
	// print_list(pile_b);
	// printf("\n");
	// {
	// 	ra(&pile_a);
	// }
	// printf("\nAprès:\n");
	// printf("Pile A:\n");
	// print_list(pile_a);
	// printf("Pile B:\n");
	// print_list(pile_b);
	return (0);
}
