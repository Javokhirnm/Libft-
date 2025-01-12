/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:15:02 by jnematil          #+#    #+#             */
/*   Updated: 2024/12/25 18:42:32 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char*)s;
    i = 0;
    if(!s)
    {
        return NULL;
    }
    while(i < n)
    {
        str[i] = (char)c;
        i++;
    }
    return (s);
}
