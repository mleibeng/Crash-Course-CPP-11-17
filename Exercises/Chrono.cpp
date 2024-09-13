/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chrono.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:38:47 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:34:01 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

// TODO: Implement a function called 'measureExecutionTime' that:
// - Takes a function (or lambda) as a parameter
// - Measures the execution time of the function
// - Returns the duration in milliseconds

template<typename Func>
auto measureExecutionTime(Func func) {
    // TODO: Implement measureExecutionTime
}

// TODO: Implement a function called 'simulateWork' that:
// - Takes a duration in milliseconds as a parameter
// - Sleeps for the given duration
// - Prints "Work completed!" after waking up

void simulateWork(int milliseconds) {
    // TODO: Implement simulateWork
}

// TODO: Implement a function called 'printCurrentTime' that:
// - Gets the current system time
// - Prints it in a readable format (e.g., "2023-09-13 15:30:45")

void printCurrentTime() {
    // TODO: Implement printCurrentTime
}

// TODO: Implement a function called 'addDuration' that:
// - Takes a time_point and a duration as parameters
// - Adds the duration to the time_point
// - Returns the new time_point

template<typename TimePoint, typename Duration>
auto addDuration(const TimePoint& time, const Duration& duration) {
    // TODO: Implement addDuration
}

int main() {
    // TODO: Use measureExecutionTime to measure the execution time of simulateWork
    // Print the result

    std::cout << "Current time: ";
    printCurrentTime();
    std::cout << std::endl;

    // TODO: Get the current time, add 1 hour to it using addDuration, and print both times
    
    // TODO: Create a time point for New Year's Day 2025 at midnight
    // Calculate and print the duration from now until then

    return 0;
}