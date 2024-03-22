/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:10:29 by ussef             #+#    #+#             */
/*   Updated: 2024/03/22 11:57:00 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"



int main()
{

    
    try
    {
        std::vector <int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        easyfind<std::vector<int> >(vec, 50);
    }
    catch(const std::exception& ex)
    {
        std::cerr<< "Item Not Found ." << '\n';
    }

    std::cout << "-------------------------\n";
    try
    {
        std::list <int> lst;
        lst.push_back(100);
        lst.push_back(200);
        lst.push_back(300);
        easyfind<std::list<int> >(lst, 200);
    }
    catch(const std::exception& ex)
    {
        std::cerr<< "Item Not Found ." << '\n';
    }
    
}