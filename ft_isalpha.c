/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:00:41 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 17:00:44 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isalpha('G')); // imprime 1
    printf("%d\n", ft_isalpha('4')); // imprime 0
    return (0);
}*/
