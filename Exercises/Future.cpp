/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Future.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:39:30 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:35:16 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <future>
#include <thread>
#include <vector>
#include <cmath>

// TODO: Implement a function called 'calculateSquareRoot' that:
// - Takes a double as input
// - Simulates a time-consuming calculation by sleeping for 100ms
// - Returns the square root of the input

double calculateSquareRoot(double input) 
{
    // TODO: Implement calculateSquareRoot
}

// TODO: Implement a function called 'asyncCalculateSquareRoots' that:
// - Takes a vector of doubles as input
// - Uses std::async to calculate the square root of each number asynchronously
// - Returns a vector of futures, each containing the result of a square root calculation

std::vector<std::future<double>> asyncCalculateSquareRoots(const std::vector<double>& numbers) 
{
    // TODO: Implement asyncCalculateSquareRoots
}

// TODO: Implement a function called 'getResultsFromFutures' that:
// - Takes a vector of futures as input
// - Waits for all futures to complete and collects their results
// - Returns a vector of the results

std::vector<double> getResultsFromFutures(std::vector<std::future<double>>& futures) 
{
    // TODO: Implement getResultsFromFutures
}

int main() 
{
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Starting asynchronous calculations..." << std::endl;

    // TODO: Use asyncCalculateSquareRoots to start the calculations

    std::cout << "Calculations started. Waiting for results..." << std::endl;

    // TODO: Use getResultsFromFutures to wait for and collect the results

    // TODO: Print the results

    // Bonus TODO: Implement a simple promise-future example
    // - Create a promise of type int
    // - Get the future from the promise
    // - In a separate thread, fulfill the promise after a short sleep
    // - In the main thread, wait for the future and print the result

    return 0;
}