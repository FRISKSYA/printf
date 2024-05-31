/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfukuhar <kfukuhar@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:31:00 by kfukuhar          #+#    #+#             */
/*   Updated: 2024/05/15 19:33:16 by kfukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

// int	main(void)
// {
// 	int	num;

// 	num = ft_printf(
// 			"[SZJ%u=%c<!r%%{(F.x[%dQs(fJ%pB_+%s}%u>~Pf\nm%inP29@%Xc'c%%Kr",
// 			118173921,
// 			2146454520,
// 			106616850,
// 			(void *)-8779729001193103479,
// 			"#Lysp@A;;IgH=z9LTtgOF4\f[Ld!(PUAnn`5q!@5.{\\Q \\%O\\,0Q4t{?-8c5O\v=sd,Dxxc\\^J'F+pan}Vk_x$(\r^f,$",
// 			757334024,
// 			1445502626,
// 			-125379917
// 			);
// 	printf("\n%d\n", num);

// 	num = printf(
// 			"[SZJ%u=%c<!r%%{(F.x[%dQs(fJ%pB_+%s}%u>~Pf\nm%inP29@%Xc'c%%Kr",
// 			118173921,
// 			2146454520,
// 			106616850,
// 			(void *)-8779729001193103479,
// 			"#Lysp@A;;IgH=z9LTtgOF4\f[Ld!(PUAnn`5q!@5.{\\Q \\%O\\,0Q4t{?-8c5O\v=sd,Dxxc\\^J'F+pan}Vk_x$(\r^f,$",
// 			757334024,
// 			1445502626,
// 			-125379917
// 			);
// 	printf("\n%d\n", num);
// 	return (0);
// }

#include <stdio.h>

int	main(void)
{
	int	i;

	// cspdiuxX%
	//	c
	i = ft_printf("hi, %c\n", 'a');
	ft_printf("%d\n", i);
	i = printf("hi, %c\n", 'a');
	printf("%d\n", i);

	//	s
	i = ft_printf("hi, %s\n", "kenta");
	ft_printf("%d\n", i);
	i = printf("hi, %s\n", "kenta");
	printf("%d\n", i);

	//	p
	i = ft_printf("hi, %p\n", &i);
	ft_printf("%d\n", i);
	i = printf("hi, %p\n", &i);
	printf("%d\n", i);

	//	d
	i = ft_printf("hi, %d\n", 10);
	ft_printf("%d\n", i);
	i = printf("hi, %d\n", 10);
	printf("%d\n", i);

	//	i
	i = ft_printf("hi, %i\n", 10);
	ft_printf("%d\n", i);
	i = printf("hi, %i\n", 10);
	printf("%d\n", i);

	//	u
	i = ft_printf("hi, %u\n", -2147483647);
	ft_printf("%d\n", i);
	i = printf("hi, %u\n", -2147483647);
	printf("%d\n", i);

	//	x
	i = ft_printf("hi, %x\n", 2147483647);
	ft_printf("%d\n", i);
	i = printf("hi, %x\n", 2147483647);
	printf("%d\n", i);

	//	X
	i = ft_printf("hi, %X\n", 2147483647);
	ft_printf("%d\n", i);
	i = printf("hi, %X\n", 2147483647);
	printf("%d\n", i);

	//	%
	i = ft_printf("hi, %%\n");
	ft_printf("%d\n", i);
	i = printf("hi, %%\n");
	printf("%d\n", i);
	//i = ft_printf("hi, %");
	//ft_printf("%d\n", i);
	//i = printf("hi, %");
	//printf("%d\n", i);


	// tests
	//	1:
	i = ft_printf("hi, I am %s, %dage.\n", "kenta", 26);
	ft_printf("%d\n", i);
	i = printf("hi, I am %s, %dage.\n", "kenta", 26);
	printf("%d\n", i);

	//	2:
	int	test = 100;
	i = ft_printf(
	"%p%%hi, %x I am %s, %dage.\n",
	&test,
	test,
	"kenta fukuhara. this is a test sentense. I like playing poker.",
	26
	);
	ft_printf("%d\n", i);
	i = printf(
	"%p%%hi, %x I am %s, %dage.\n",
	&test,
	test,
	"kenta fukuhara. this is a test sentense. I like playing poker.",
	26
	);
	printf("%d\n", i);
	return (0);
}
