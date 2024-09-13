/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Threads&Mutexes.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:39:01 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:55:40 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <chrono>

// TODO: Implement a thread-safe counter class called 'SafeCounter' that:
// - Has an internal counter of type size_t
// - Has a mutex to protect access to the counter
// - Has methods to increment the counter and get its value safely

class SafeCounter 
{
    // TODO: Implement SafeCounter
};

// TODO: Implement a function called 'worker' that:
// - Takes a reference to a SafeCounter and a number of iterations
// - In a loop (for the given number of iterations):
//   - Increments the counter
//   - Sleeps for a random time between 0 and 10 milliseconds

void worker(SafeCounter& counter, int iterations) 
{
    // TODO: Implement worker function
}

int main() 
{
    SafeCounter counter;
    const int NUM_THREADS = 5;
    const int ITERATIONS_PER_THREAD = 100;

    // TODO: Create a vector of std::thread objects

    // TODO: Launch NUM_THREADS threads, each running the worker function

    // TODO: Wait for all threads to complete

    // TODO: Print the final value of the counter

    return 0;
}