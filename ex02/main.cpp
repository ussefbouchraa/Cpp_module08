/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:33:07 by ussef             #+#    #+#             */
/*   Updated: 2024/03/23 17:36:36 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
    // return 0;

std::cout <<"-----------------------------\n";

    std::list<int> m;
    m.push_back(5);
    m.push_back(17);
    std::cout << m.back() << std::endl;
    m.pop_back();
    std::cout << m.size() << std::endl;
    m.push_back(3);
    m.push_back(5);
    m.push_back(737);
    //[...]
    m.push_back(0);
    std::list<int>::iterator it1 = m.begin();
    std::list<int>::iterator it2 = m.end();
    ++it1;
    --it1;
    while (it1 != it2)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    // std::stack<int> s(m);
    // return 0;
}