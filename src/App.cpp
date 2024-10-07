#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
   
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <pattern> <filename>" << endl;
        return 1;  // Error if arguments are incorrect
    }

    // Read the pattern (which will be empty in this case)
    string pattern = argv[1];
    
    // Open the file
    ifstream file(argv[2]);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << argv[2] <<endl;
        return 1;  // Error if file cannot be opened
    }

    // If the pattern is empty, we print the entire file
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    // Return 0 since an empty string always "matches"
    return 0;
}
