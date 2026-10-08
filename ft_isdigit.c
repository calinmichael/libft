/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccascava <ccascava@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:03:36 by ccascava          #+#    #+#             */
/*   Updated: 2026/09/28 13:13:42 by ccascava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/** #include <stdio.h> **/

int	ft_isdigit(int value)
{
	if (value < 48 || value > 57)
	{
		return (0);
	}
	return (1);
}

/**
int main()
{
	char value[] = "473";
	int result = ft_isdigit(value);
	printf("%d", result);
	return (0);
}
**/
