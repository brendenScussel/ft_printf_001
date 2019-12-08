/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_general.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:36:43 by bscussel          #+#    #+#             */
/*   Updated: 2019/12/04 15:05:04 by bscussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int				main(void)
{
    printf("printf: {...}\nft_printf: {...}\n");
	ft_printf("\tHello, World!\n");

	printf("_______________\n[%] conversion\n_______________\n");

	printf("(_),\t[%%]\n");
	ft_printf("(_),\t[%%]\n");
	printf("(3),\t[%3%]\n");
	ft_printf("(3),\t[%3%]\n");
	printf("(-3),\t[%-3%]\n");
	ft_printf("(-3),\t[%-3%]\n");

	printf("_______________\n[c] conversion\n_______________\n");

	printf("(c),   42 = [%c]\n", 42);
	ft_printf("(c),   42 = [%c]\n", 42);
	printf("(5c),  42 = [%5c]\n", 42);
	ft_printf("(5c),  42 = [%5c]\n", 42);
	printf("(-5c), 42 = [%-5c]\n", 42);
	ft_printf("(-5c), 42 = [%-5c]\n", 42);
	printf("(.c),  42 = [%.c]\n", 42);
	ft_printf("(.c),  42 = [%.c]\n", 42);

	printf("_______________\n[s] conversion\n_______________\n");

	char	*str = "I am";

	printf("(s),     42 = [%s]\n", "42");
	ft_printf("(s),     42 = [%s]\n", "42");
	printf("(5s),    42 = [%5s]\n", "42");
	ft_printf("(5s),    42 = [%5s]\n", "42");
	printf("(-5s),   42 = [%-5s]\n", "42");
	ft_printf("(-5s),   42 = [%-5s]\n", "42");
	printf("(-5.0s), 42 = [%-5.0s]\n", "42");
	ft_printf("(-5.0s), 42 = [%-5.0s]\n", "42");
	printf("(-5.1s), 42 = [%-5.1s]\n", "42");
	ft_printf("(-5.1s), 42 = [%-5.1s]\n", "42");
	printf("(-5.s),  42 = [%-5.s]\n", "42");
	ft_printf("(-5.s),  42 = [%-5.s]\n", "42");
	printf("(-3.1s), 42 = [%-3.1s]\n", "42");
	ft_printf("(-3.1s), 42 = [%-3.1s]\n", "42");
	printf("(-3.2s), 42 = [%-3.2s]\n", "42");
	ft_printf("(-3.2s), 42 = [%-3.2s]\n", "42");
	printf("(-3.s),  42 = [%-3.s]\n", "42");
	ft_printf("(-3.s),  42 = [%-3.s]\n", "42");
	printf("(.s),    42 = [%.s]\n", "42");
	ft_printf("(.s),    42 = [%.s]\n", "42");
	printf("(.0s),   42 = [%.0s]\n", "42");
	ft_printf("(.0s),   42 = [%.0s]\n", "42");
	printf("(.5s),   42 = [%.5s]\n", "42");
	ft_printf("(.5s),   42 = [%.5s]\n", "42");
	printf("(3.1s),  42 = [%3.1s]\n", "42");
	ft_printf("(3.1s),  42 = [%3.1s]\n", "42");
	printf("(3.2s),  42 = [%3.2s]\n", "42");
	ft_printf("(3.2s),  42 = [%3.2s]\n", "42");
	printf("(-3.0s), 42 = [%-3.0s]\n", "42");
	ft_printf("(-3.0s), 42 = [%-3.0s]\n", "42");
	printf("[%2.1s] is a string\n", "Iam");
	ft_printf("[%2.1s] is a string\n", "Iam");
	printf("[%-2.1s] is a string\n", str);
	ft_printf("[%-2.1s] is a string\n", str);

	printf("_______________\n[p] conversion\n_______________\n");

	char	*pstr = "42";

	printf("(p),     *pstr = [%p]\n", pstr);
	ft_printf("(p),     *pstr = [%p]\n", pstr);
	printf("(.p),    *pstr = [%.p]\n", pstr);
	ft_printf("(.p),    *pstr = [%.p]\n", pstr);
	printf("(12p),   *pstr = [%12p]\n", pstr);
	ft_printf("(12p),   *pstr = [%12p]\n", pstr);
	printf("(-12p),  *pstr = [%-12p]\n", pstr);
	ft_printf("(-12p),  *pstr = [%-12p]\n", pstr);

	printf("_______________\n[d]/[i] conversion\n_______________\n");

	printf("(d),        42000 = [%d]\n", 42000);
	ft_printf("(d),        42000 = [%d]\n", 42000);
	printf("(i),       -42000 = [%i]\n", -42000);
	ft_printf("(i),       -42000 = [%i]\n", -42000);
	printf("(-9d),       42000 = [%-9d]\n", 42000);
	ft_printf("(-9d),       42000 = [%-9d]\n", 42000);
	printf("(9i),      -42000 = [%9i]\n", -42000);
	ft_printf("(9i),      -42000 = [%9i]\n", -42000);
	printf("(+-9d),      42000 = [%+-9d]\n", 42000);
	ft_printf("(+-9d),      42000 = [%+-9d]\n", 42000);
	printf("(+-9i),     -42000 = [%+-9i]\n", -42000);
	ft_printf("(+-9i),     -42000 = [%+-9i]\n", -42000);
	printf("( -9d),      42000 = [% -9d]\n", 42000);
	ft_printf("( -9d),      42000 = [% -9d]\n", 42000);
	printf("( -9d),     -42000 = [% -9d]\n", -42000);
	ft_printf("( -9d),     -42000 = [% -9d]\n", -42000);
	printf("(12.0d),    42000 = [%12.0d]\n", 42000);
	ft_printf("(12.0d),    42000 = [%12.0d]\n", 42000);
	printf("(-12.9i),   -42000 = [%-12.0i]\n", -42000);
	ft_printf("(-12.9i),   -42000 = [%-12.i]\n", -42000);
	printf("(+-12.9d),   42000 = [%+-12.9d]\n", 42000);
	ft_printf("(+-12.9d),   42000 = [%+-12.9d]\n", 42000);
	printf("(+-12.9d),  -42000 = [%+-12.9d]\n", -42000);
	ft_printf("(+-12.9d),  -42000 = [%+-12.9d]\n", -42000);
	printf("(-10.d),     42000 = [%-10.d]\n", 42000);
	ft_printf("(-10.d),     42000 = [%-10.d]\n", 42000);
	printf("(-10.d),    -42000 = [%-10.d]\n", -42000);
	ft_printf("(-10.d),    -42000 = [%-10.d]\n", -42000);

	printf("_______________\n[o] conversion\n_______________\n");

	printf("(o),              8 = [%o]\n", 8);
	ft_printf("(o),              8 = [%o]\n", 8);
	printf("(o),             42 = [%o]\n", 42);
	ft_printf("(o),             42 = [%o]\n", 42);
	printf("(-16o),            42 = [%-16o]\n", 42);
	ft_printf("(-16o),            42 = [%-16o]\n", 42);
	printf("(016o),           42 = [%016o]\n", 42);
	ft_printf("(016o),           42 = [%016o]\n", 42);

	printf("_______________\n[u] conversion\n_______________\n");

	printf("(u),                         42 = [%u]\n", 42);
	ft_printf("(u),                         42 = [%u]\n", 42);
	printf("(u),                        -42 = [%u]\n", -42);
	ft_printf("(u),                        -42 = [%u]\n", -42);
	printf("(15u),                       42 = [%15u]\n", 42);
	ft_printf("(15u),                       42 = [%15u]\n", 42);
	printf("(-15u),                      -42 = [%-15u]\n", 42);
	ft_printf("(-15u),                      -42 = [%-15u]\n", 42);
	printf("(20.13u),                    42 = [%20.13u]\n", 42);
	ft_printf("(20.13u),                    42 = [%20.13u]\n", 42);
	printf("(-20.13u),                   42 = [%-20.13u]\n", 42);
	ft_printf("(-20.13u),                   42 = [%-20.13u]\n", 42);

	printf("_______________\n[x] conversion\n_______________\n");

	printf("(x),                                  0 = [%x]\n", 0);
	ft_printf("(x),                                  0 = [%x]\n", 0);
	printf("(#x),                                  42 = [%#x]\n", 42);
	ft_printf("(#x),                                  42 = [%#x]\n", 42);
	printf("(#6x),                                 42 = [%#6x]\n", 42);
	ft_printf("(#6x),                                 42 = [%#6x]\n", 42);

	printf("_______________\n[X] conversion\n_______________\n");

	printf("(X),                                  0 = [%X]\n", 0);
	ft_printf("(X),                                  0 = [%X]\n", 0);
	printf("(#X),                                  42 = [%#X]\n", 42);
	ft_printf("(#X),                                  42 = [%#X]\n", 42);
	printf("(#6X),                                 42 = [%#6X]\n", 42);
	ft_printf("(#6X),                                 42 = [%#6X]\n", 42);

	printf("_______________\n[f] conversion\n_______________\n");

	printf("[%d]\n", printf("(-+f),                            42.00 = [%-+f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-+f),                            42.00 = [%-+f]\n", 42.00));
	printf("[%d]\n", printf("(-+f),                           -42.00 = [%-+f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-+f),                           -42.00 = [%-+f]\n", -42.00));
	printf("[%d]\n", printf("(- f),                            42.00 = [%- f]\n", 42.00));
	printf("[%d]\n", ft_printf("(- f),                            42.00 = [%- f]\n", 42.00));
	printf("[%d]\n", printf("(- f),                           -42.00 = [%- f]\n", -42.00));
	printf("[%d]\n", ft_printf("(- f),                           -42.00 = [%- f]\n", -42.00));

	ft_printf("\n");

	printf("[%d]\n", printf("(-f),                             42.00 = [%-f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-f),                             42.00 = [%-f]\n", 42.00));
	printf("[%d]\n", printf("(-f),                            -42.00 = [%-f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-f),                            -42.00 = [%-f]\n", -42.00));
	printf("[%d]\n", printf("(-#f),                            42.00 = [%-#f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-#f),                            42.00 = [%-#f]\n", 42.00));
	printf("[%d]\n", printf("(-#f),                           -42.00 = [%-#f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-#f),                           -42.00 = [%-#f]\n", -42.00));
	printf("[%d]\n", printf("(-#20f),                          42.00 = [%-#20f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-#20f),                          42.00 = [%-#20f]\n", 42.00));
	printf("[%d]\n", printf("(-#20f),                         -42.00 = [%-#20f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-#20f),                         -42.00 = [%-#20f]\n", -42.00));
	printf("[%d]\n", printf("(-20f),                           42.00 = [%-20f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-20f),                           42.00 = [%-20f]\n", 42.00));
	printf("[%d]\n", printf("(-20f),                          -42.00 = [%-20f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-20f),                          -42.00 = [%-20f]\n", -42.00));
	printf("[%d]\n", printf("(-#20.f),                         42.00 = [%-#20.f]\n", 42.00));
	printf("[%d]\n", ft_printf("(-#20.f),                         42.00 = [%-#20.f]\n", 42.00));
	printf("[%d]\n", printf("(-#20.f),                        -42.00 = [%-#20.f]\n", -42.00));
	printf("[%d]\n", ft_printf("(-#20.f),                        -42.00 = [%-#20.f]\n", -42.00));

	return (0);
}
