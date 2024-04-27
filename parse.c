/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:22:04 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 10:01:56 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack **ft_parse(int argc, char **argv)
{
    char **stk_large;
    int i = 0;  // Inicializa i
    int c = 0;  // Inicializa c
    t_stack **stk;
    
    if (argc == 2) {
        stk_large = ft_split(argv[1], ' ');  // Corrige el delimitador a un char
        while (stk_large[c]) {
            c++;  // Incrementa c para cada elemento en stk_large
        }
    } else {
        c = argc - 1;  // Si argc != 2, el número de argumentos válidos es argc - 1 (excluyendo el nombre del programa)
    }

    stk = ft_complete_stk(argv, c, i);  // Asume que c es la cantidad de elementos
    return stk;
}
