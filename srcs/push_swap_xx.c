/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:21:13 by mlancelo          #+#    #+#             */
/*   Updated: 2024/11/26 18:26:53 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libswap.h"

void	sa(t_list **top_a)
{
	t_list	*first;
	t_list	*second;

	if (!(*top_a) || !((*top_a)->next))
		return ;
	first = *top_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*top_a = second;
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **top_b)
{
	t_list	*first;
	t_list	*second;

	if (!(*top_b) || !((*top_b)->next))
		return ;
	first = *top_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*top_b = second;
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **top_a, t_list **top_b)
{
	t_list	*first;
	t_list	*second;

	if (!(*top_a) || !((*top_a)->next))
		return ;
	first = *top_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*top_a = second;
	if (!(*top_b) || !((*top_b)->next))
		return ;
	first = *top_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*top_b = second;
	ft_putendl_fd("ss", 1);
}

void	pb(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp;

	if (*pile_a == NULL)
		return ;
	tmp = *pile_a;
	*pile_a = tmp->next;
	tmp->next = *pile_b;
	*pile_b = tmp;
	ft_putendl_fd("pb", 1);
}

void	pa(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp;

	if (*pile_b == NULL)
		return ;
	tmp = *pile_b;
	*pile_b = tmp->next;
	tmp->next = *pile_a;
	*pile_a = tmp;
	ft_putendl_fd("pa", 1);
}

// void	ra(t_list **pile_a)
// {
// 	t_list	*tmp;
// 	// t_list	first_arg;

// 	if (!(*pile_a) || !((*pile_a)->next))
// 		return ;
// 	tmp = *pile_a;
// 	*pile_a = tmp->next;
// 	ft_lstadd_back(&pile_a, &tmp);

// }
