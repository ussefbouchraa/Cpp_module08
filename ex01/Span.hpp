/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:09:06 by ussef             #+#    #+#             */
/*   Updated: 2024/03/25 09:26:05 by ybouchra         ###   ########.fr       */
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
    void addNumber( std::vector<int> v);
};
