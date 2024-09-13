/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SmartPointers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:38:56 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:29:37 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <memory>
#include <vector>

// TODO: Implement a simple class called 'Resource' with the following:
// - A private integer member variable 'id'
// - A constructor that takes an int and initializes 'id'
// - A destructor that prints "Resource [id] destroyed"
// - A public member function 'getId()' that returns the id

class Resource 
{
    private:
    int id;
    
    public:
    Resource();
    Resource(int id);
    ~Resource();
    int getId();
};

// TODO: Implement a function called 'createUniqueResource' that:
// - Takes an integer as input
// - Creates a Resource object with that integer as the id
// - Returns a unique_ptr to that Resource

std::unique_ptr<Resource> createUniqueResource(int id) 
{
    // TODO: Implement createUniqueResource
}

// TODO: Implement a function called 'createSharedResources' that:
// - Takes a vector of integers as input
// - Creates a shared_ptr to a Resource for each integer
// - Returns a vector of those shared_ptrs

std::vector<std::shared_ptr<Resource>> createSharedResources(const std::vector<int>& ids) 
{
    // TODO: Implement createSharedResources
}

int main() 
{
    // TODO: Use createUniqueResource to create a unique_ptr to a Resource
    // Print the id of the Resource
    // (The Resource should be automatically destroyed when it goes out of scope)

    std::cout << "\nTesting shared_ptr:\n";
    {
        // TODO: Create a vector of integers {1, 2, 3}
        // Use createSharedResources to create a vector of shared_ptrs
        // Create a new shared_ptr that shares ownership of the second Resource
        // Print the ids of all Resources
        // (Note how many times each Resource is destroyed)
    }

    return 0;
}