/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:09:06 by ussef             #+#    #+#             */
/*   Updated: 2024/03/22 17:01:28 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector <int> vec_numbers;
    
    Span();
public:
    Span(unsigned int _N);
    Span(const Span &rhs);
    Span& operator=(const Span &rhs);
    ~Span();
    
    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();
    void addNumber(std::vector<int> ::iterator it1, std::vector<int>:: iterator it2);
   
    // void Span::addN(std::vector<int> v);
};
