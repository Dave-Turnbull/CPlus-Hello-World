#include <iostream>
#include <limits>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World", "I", "am", "David"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user
}