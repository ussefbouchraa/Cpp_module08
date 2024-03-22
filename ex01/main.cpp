/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:06:59 by ussef             #+#    #+#             */
/*   Updated: 2024/03/22 17:02:03 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

     std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char* e)
    {
        std::cerr << e << std::endl;
    }

    std::cout << "-------------------------\n";

    try
    {
        std::vector<int> v;
        Span S(100);
        for(int i = 0; i < 100; i++)
            v.push_back(i);

        S.addNumber(v.begin(), v.end());
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }catch(const char *e)
    {
        std::cout << *e << std::endl;
    }
    
return 0;
}