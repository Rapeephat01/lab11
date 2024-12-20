#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

  
    const char* grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    const int total_grades = 9;

    
    cout << "Press Enter 3 times to reveal your future." << endl;

    
    for (int i = 0; i < 3; ++i) {
        cin.ignore(); 
    }

    
    int random_index = rand() % total_grades;

    
    cout << "You will get " << grades[random_index] << " in this 261102." << endl;

    return 0;
}
