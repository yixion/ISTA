#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    int T, S;
    
    // Read input values
    std::cin >> T >> S;
    
    double salary = 0.0;
    
    // Calculate salary for first 60 hours
    if (T <= 60) {
        salary = T * S;
    } else {
        salary = 60 * S;
        
        // Calculate salary for hours between 61 and 120
        if (T <= 120) {
            salary += (T - 60) * S * 1.33;
        } else {
            salary += 60 * S * 1.33;
            
            // Calculate salary for hours above 120
            salary += (T - 120) * S * 1.66;
        }
    }
    
    // Print the result with one decimal place
    std::cout << std::fixed << std::setprecision(1) << salary << std::endl;
    
    return 0;
}