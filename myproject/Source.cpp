#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    const int size = 20;
    int array[size];

 
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < size; ++i) 
    {
        array[i] = rand() % 6 + 5; 
    }

    for (int i = 0; i < size; ++i) 
    {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) 
        {
            cout << endl; 
        }
    }

    return 0;
}