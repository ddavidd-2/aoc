#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout << "inavlid args\n";
        return 1;
    }

    std::ifstream inf{ argv[1] };

    if (!inf) {
        std::cout << "error opening file " << argv[1] << "\n";
        return 1;
    }

    std::string line;
    int sum{0};

    while (std::getline(inf, line)) {
        int first;
        bool hasFirst{ false };
        int second; 
        for (char c : line) {
            int value{ static_cast<int>(c) - '0'};
            if (value >= 0 && value <= 9) {
                if (!hasFirst) {
                    first = value;
                    hasFirst = true;
                }
                second = value; 
            }
        }
        sum += 10 * first + second;
    }

    std::cout << "sum is: " << sum << "\n";
    return 0;

}