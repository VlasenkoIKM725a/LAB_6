#include <iostream>
#include <iomanip> 

int main() {

    int number;
    int sum_multiples = 0;
    int count_multiples = 0;
    double average = 0.0;

    std::cout << "Mean of multiples of 3. Enter '0' to end.\n";

    do {
        std::cout << "Enter number: ";
        if (!(std::cin >> number)) {
            std::cerr << "Input error!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (number != 0 && number % 3 == 0) {
            sum_multiples += number;
            count_multiples++;
        }

    } while (number != 0);

    std::cout << "\n--- Result ---\n";

    if (count_multiples > 0) {
        average = (double)sum_multiples / count_multiples;

        std::cout << "Count: " << count_multiples << "\n";
        std::cout << "Sum: " << sum_multiples << "\n";

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Mean: " << average << "\n";
    }
    else {
        std::cout << "No multiples of 3 found.\n";
    }

    return 0;
}