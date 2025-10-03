/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanuel- <imanuel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:08:15 by imanuel-          #+#    #+#             */
/*   Updated: 2025/10/03 18:10:43 by imanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int result;

	result = isalpha('a');
	printf("Result: %d/n", result);
	return (0);
}
