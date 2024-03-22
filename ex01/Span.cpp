/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:07:49 by ussef             #+#    #+#             */
/*   Updated: 2024/03/22 17:00:26 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}
Span::Span(unsigned int _N) : N(_N)
{
    
}
Span::Span(const Span &rhs)
{
    *this = rhs;
}
Span& Span::operator=(const Span &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}
Span::~Span()
{
}
void Span::addNumber(int nbr)
{
    
    if(vec_numbers.size() > N)
        throw(std::exception());
    this->vec_numbers.push_back(nbr);
}

int Span::longestSpan()
{
    if(vec_numbers.empty())
          throw "Err: Empty_Container .";
    if(vec_numbers.size() < 2)
       throw "Err: Span Contains Less Than Two Nbrs .";

    std::sort(vec_numbers.begin(), vec_numbers.end());
    return(vec_numbers.back() - vec_numbers.front());
 }

int Span::shortestSpan()
{
    if(vec_numbers.empty())
        throw "Err: Empty_Container .";
    if(vec_numbers.size() < 2)
       throw "Err: Span Contains Less Than Two Nbrs .";
    std::sort(vec_numbers.begin(), vec_numbers.end());
    int min_span = vec_numbers[1] - vec_numbers[0];
    for (unsigned int i = 1; i < vec_numbers.size(); i++)
    {
        if((vec_numbers[i] - vec_numbers[i - 1]) < min_span)
            min_span = vec_numbers[i] - vec_numbers[i - 1];
    }
    return min_span;
}

   void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
    {
      if(this->vec_numbers.size() >= this->N)
        throw "Err: Out of Range ";
      this->vec_numbers.insert(this->vec_numbers.begin(), it1, it2);
    } 

    //    void Span::addN(std::vector<int> v)
    // {
    //   if(this->vec_numbers.size() >= this->N)
    //     throw "Err: Out of Range ";
    //   this->vec_numbers.insert(this->vec_numbers.begin(), v.begin(), v.end());
    // } 