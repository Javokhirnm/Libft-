/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:00:53 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 18:00:53 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int s)
{
	if (s >= 'a' && s <= 'z')
		return (s - 32);
	else
		return (s);
}