#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

void getStats(int randArr[], int num)
{
    int sum = 0, highest = randArr[0], lowest = randArr[0];
    double average;
    
    for (int i = 0; i < num; i++)
    {
        highest = (randArr[i] > highest) ? randArr[i] : highest;
        lowest = (randArr[i] < lowest) ? randArr[i] : lowest;
        sum += randArr[i];
    }

    average = sum / num;

    cout << "\nArray Statistics: " << endl;
    cout << "Max: " << highest << endl;
    cout << "Min: " << lowest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << average << endl;
}

int main()
{
    const int size = 30;
    int randomArray[size];
    
    
    for (int i = 0; i < size; i++)
    {
        randomArray[i] = rand() % 100;
    }

    cout << "Array contents: \n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << randomArray[i];
        if (i % 5 == 0)
            cout << endl;
    }
    getStats(randomArray, size);
        
}
