/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lambda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:38:51 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:31:53 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

// TODO: Implement a function template called 'applyOperation' that:
// - Takes a vector of integers and a lambda function as parameters
// - Applies the lambda function to each element of the vector
// - Returns a new vector with the results

template<typename Func>
std::vector<int> applyOperation(const std::vector<int>& vec, Func operation) 
{
    // TODO: Implement applyOperation
}

int main() 
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // TODO: Create a lambda expression that squares a number
    // Use applyOperation with this lambda and print the result

    // TODO: Create a lambda expression that adds 10 to a number
    // Use applyOperation with this lambda and print the result

    // TODO: Use std::count_if with a lambda expression to count
    // how many numbers in 'numbers' are greater than 3
    // Print the result

    // TODO: Create a lambda expression that captures a local variable
    // The lambda should multiply each number by the captured variable
    // Use applyOperation with this lambda and print the result

    // TODO: Use std::sort with a lambda expression to sort 'numbers' in descending order
    // Print the sorted vector

    return 0;
}