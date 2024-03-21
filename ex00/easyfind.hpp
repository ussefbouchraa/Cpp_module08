/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 07:15:25 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/21 17:00:37 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void easyfind(T container, int value)
{
    
    typename T::iterator it;
    for( it = container.begin(); it != container.end(); it++){
        if (*it == value) {
            std::cout << "Item is Found ." << std::endl;
            return;
        }
    }
        throw(std::exception()); 

}
