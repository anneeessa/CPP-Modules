/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:43:22 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/21 02:32:51 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    try
    {
        MutantStack<int> mstack;
		
        mstack.push(10);
        mstack.push(20);
        std::cout << "Top: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size after pop: " << mstack.size() << std::endl;


        mstack.push(30);
        mstack.push(40);
        mstack.push(50);
        mstack.push(60);

    
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        std::stack<int> s(mstack);

        while (!mstack.empty())
			mstack.pop();

        std::cout << "Size after clear: " << mstack.size() << std::endl;
        mstack.push(100);
        std::cout << "Size after push: " << mstack.size() << std::endl;
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }


MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);

mstack.push(0);
MutantStack<int>::iterator it1 = mstack.begin();
MutantStack<int>::iterator ite1 = mstack.end();
++it1;
std::cout <<"After increment " << *it1 << std::endl;
--it1;
std::cout <<"Before increment " << *it1 << std::endl;
while (it1 != ite1)
{
std::cout << *it1 << std::endl;
++it1;
}
std::stack<int> v(mstack);
std::cout << "Stack size: " << v.size() << std::endl;


std::vector<int> vec;
vec.push_back(5);
vec.push_back(17);
std::cout << vec.back() << std::endl;
vec.pop_back();
std::cout << vec.size() << std::endl;
vec.push_back(3);
vec.push_back(5);
vec.push_back(737);

vec.push_back(0);
std::vector<int>::iterator it2 = vec.begin();
std::vector<int>::iterator ite2 = vec.end();
++it2;
std::cout <<"After increment " << *it2 << std::endl;
--it2;
std::cout <<"Before increment " << *it2 << std::endl;

while (it2 != ite2)
{
std::cout << *it2 << std::endl;
++it2;
}
std::vector<int> s(vec);
std::cout << "Stack size: " << s.size() << std::endl;

    return 0;
}
