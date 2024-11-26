/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libswap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:43:31 by mlancelo          #+#    #+#             */
/*   Updated: 2024/11/26 20:28:37 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSWAP_H
# define LIBSWAP_H
# include "../libft/libft.h"
# include <stdio.h>

void	pb(t_list **pile_a, t_list **pile_b);
void	pa(t_list **pile_a, t_list **pile_b);
void	sa(t_list **top_a);
void	sb(t_list **top_b);
void	ss(t_list **top_a, t_list **top_b);
void	ra(t_list **pile_a);
int		check(int argc, char **argv);

#endif
