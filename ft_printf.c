/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:23:17 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/06/06 18:52:38 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char	spec, va_list ap)
{
	int	count;

	count = 0;
	if (!spec)
		return (0);
	else if (spec == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count = ft_putnbr(va_arg(ap, int));
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	// inicializar a lista apontando o pointer 'ap' para o primeiro argumento
	va_start(ap, format);
	count = 0;
	// protecao no caso do 'format' estar vazio
	if (!format)
		return (0);
	// iteracao para percorrer a string a procura de algum '%'
	while (*format != 0)
	{
		// caso encontre um '%' na string, chama outra funcao para verificar o specifier
		if (*format == '%')
			count += check_format(*(++format), ap);
		// se nao encontrar, imprime tudo normalmente
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	//char	*str = "string.";

	ft_printf("My PF> This is a %d \n", 111);
	
	printf("My PF> This is a %d \n", 111);
	return (0);
}