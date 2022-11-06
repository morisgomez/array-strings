#include <iostream>
#include <string>
using namespace std;

int main() {
    const int cars = 5; 
    string brands[cars] = {"honda", "toyota", "mazda", "bmw", "ford"};
    //data type of array is string but size is still an integer 5.
  
    for (int counter = 0; counter < cars; counter++)
    {
        cout << "car brand number " << counter + 1 << " is " << brands[counter] << endl;
    }
    return 0;
}
