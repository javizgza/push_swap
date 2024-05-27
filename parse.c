/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:22:04 by jazarago          #+#    #+#             */
/*   Updated: 2024/05/27 18:08:55 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack **ft_parse(int argc, char **argv)
{
    char **stk_large = NULL;
    int i = 0;  // Initialize i
    int c = 0;  // Initialize c
    t_stack **stk;
    
    if (argc >= 2) {
        stk_large = ft_split(argv[1], ' ');  // Correct the delimiter to a char
        while (stk_large[c]) {
            c++;  // Increment c for each element in stk_large
        }
        stk = ft_complete_stk(stk_large, c, i);  // Assume that c is the number of elements
    } else {
        c = argc - 1;  // If argc != 2, the number of valid arguments is argc - 1 (excluding the program name)
        stk = ft_complete_stk(argv, c, i);  // Assume that c is the number of elements
    }

    return stk;
}