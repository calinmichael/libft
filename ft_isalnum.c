/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccascava <ccascava@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:38:39 by ccascava          #+#    #+#             */
/*   Updated: 2026/10/06 14:24:33 by ccascava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**#include <stdio.h>**/
#include "libft.h"

int	ft_isalnum(int value)
{
	if (ft_isalpha(value) == 0 && ft_isdigit(value) == 0)
	{
		return (0);
	}
	return (1);
}

/**
int main()
{
	int value = 'h';
	int result = ft_isalnum(value);
	printf("%d", result);
}
**/
