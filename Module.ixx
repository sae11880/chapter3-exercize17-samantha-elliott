#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <limits>   
using namespace std;

int main() {
    srand(time(0));  // Initialize random seed

    while (true) {
        int num1 = rand() % 100 + 1;  //i chose to use numbers between 1 and 100 to keep it simple
        int num2 = rand() % 100 + 1;

        cout << "Solve the following addition problem:" << endl;
        cout << num1 << " + " << num2 << " = ?" << endl;

        cout << "Press enter when you're ready to see the answer..." << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  //should allow for a pause until enter is pressed

        int correctAnswer = num1 + num2;
        cout << num1 << " + " << num2 << " = " << correctAnswer << endl;
    }




    return 0;

}