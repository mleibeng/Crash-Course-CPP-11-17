/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Regex.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvinleibenguth <marvinleibenguth@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:38:53 by marvinleibe       #+#    #+#             */
/*   Updated: 2024/09/13 22:35:34 by marvinleibe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <regex>
#include <string>
#include <vector>

// TODO: Implement a function called 'extractEmails' that:
// - Takes a string as input
// - Uses regex to find all email addresses in the string
// - Returns a vector of found email addresses

std::vector<std::string> extractEmails(const std::string& text) {
    // TODO: Implement extractEmails
}

// TODO: Implement a function called 'isValidPhoneNumber' that:
// - Takes a string as input
// - Uses regex to check if the string is a valid phone number
// - Returns true if valid, false otherwise
// - Assume a valid format is: (xxx) xxx-xxxx or xxx-xxx-xxxx

bool isValidPhoneNumber(const std::string& number) {
    // TODO: Implement isValidPhoneNumber
}

// TODO: Implement a function called 'censorSensitiveInfo' that:
// - Takes a string as input
// - Uses regex to find and replace all occurrences of sensitive info:
//   - Replace all digits in credit card numbers (xxxx-xxxx-xxxx-xxxx) with 'X'
//   - Replace all but the last 4 digits of social security numbers (xxx-xx-xxxx) with 'X'
// - Returns the censored string

std::string censorSensitiveInfo(const std::string& text) {
    // TODO: Implement censorSensitiveInfo
}

int main() {
    // Test extractEmails
    std::string emailText = "Contact us at support@example.com or sales@example.com for assistance.";
    std::vector<std::string> emails = extractEmails(emailText);
    std::cout << "Extracted emails:" << std::endl;
    for (const auto& email : emails) {
        std::cout << email << std::endl;
    }

    // Test isValidPhoneNumber
    std::vector<std::string> phoneNumbers = {"(123) 456-7890", "123-456-7890", "1234567890", "(123)456-7890"};
    std::cout << "\nValidating phone numbers:" << std::endl;
    for (const auto& number : phoneNumbers) {
        std::cout << number << " is " << (isValidPhoneNumber(number) ? "valid" : "invalid") << std::endl;
    }

    // Test censorSensitiveInfo
    std::string sensitiveText = "Credit card: 1234-5678-9012-3456, SSN: 123-45-6789";
    std::string censoredText = censorSensitiveInfo(sensitiveText);
    std::cout << "\nOriginal text: " << sensitiveText << std::endl;
    std::cout << "Censored text: " << censoredText << std::endl;

    return 0;
}