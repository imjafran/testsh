#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert to local time format
    std::tm* localTime = std::localtime(&currentTime);

    // Open the file "time.txt" in append mode
    std::ofstream outFile("time.txt", std::ios::app);

    if (outFile.is_open()) {
        // Append the time in a readable format to the file
        outFile << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << std::endl;
        std::cout << "Current time appended to 'time.txt'." << std::endl;
        outFile.close();
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }

    return 0;
}
