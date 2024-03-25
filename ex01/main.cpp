/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:06:59 by ussef             #+#    #+#             */
/*   Updated: 2024/03/25 09:49:10 by ybouchra         ###   ########.fr       */
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

        std::cout << "Shortest Span is: "<< sp.shortestSpan() << std::endl;
        std::cout << "Longest Span is: "  << sp.longestSpan() << std::endl;
    }
    catch(const char* e)
    {
        std::cerr << e << std::endl;
    }

    std::cout << "-------------------------\n";

    try
    {
        std::vector<int> v;
        // for(int i = 0; i < 5; i++)
        //     v.push_back(i);
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);

        Span S(5);
        S.addNumber(v);
        
        // std::vector<int>::iterator it1 = v.begin();
        // for(; it1 != v.end(); it1++)
        //     std::cout << "*** "<< *it1 <<std::endl;

        std::cout << "Shortest Span is: "<< S.shortestSpan() << std::endl;
        std::cout << "Longest Span is: " <<S.longestSpan() << std::endl;
    }catch(const char *e)
    {
        std::cout << e << std::endl;
    }
    
return 0;
}