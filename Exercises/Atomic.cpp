/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Atomic.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:52:51 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:55:06 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <atomic>
#include <thread>
#include <vector>

// TODO: Implement a thread-safe counter class called 'AtomicCounter' that:
// - Uses std::atomic<int> for the counter
// - Has methods to increment the counter and get its value

class AtomicCounter 
{
    public:
    std::atomic<int> counter;
    void increment();
    int get();
};

// TODO: Implement a function called 'worker' that:
// - Takes a reference to an AtomicCounter and a number of iterations
// - In a loop (for the given number of iterations):
//   - Increments the counter
//   - Optionally, you can add a small delay to simulate work

void worker(AtomicCounter& counter, int iterations) 
{
    // TODO: Implement worker function
}

// TODO: Implement a function called 'compareExchange' that:
// - Takes a reference to an std::atomic<int>
// - Attempts to replace the value with a new one if it equals an expected value
// - Returns true if successful, false otherwise

bool compareExchange(std::atomic<int>& atomic_val, int expected, int new_value) 
{
    // TODO: Implement compareExchange
}

int main() 
{
    AtomicCounter counter;
    const int NUM_THREADS = 5;
    const int ITERATIONS_PER_THREAD = 100000;

    std::vector<std::thread> threads;

    // TODO: Create and start NUM_THREADS threads, each running the worker function

    // TODO: Wait for all threads to complete

    std::cout << "Final counter value: " << counter.get() << std::endl;

    // Demonstrating compare_exchange
    std::atomic<int> atomic_value(5);
    
    // TODO: Use the compareExchange function to attempt to change atomic_value
    // Try both a successful case and a failing case
    // Print the results

    return 0;
}