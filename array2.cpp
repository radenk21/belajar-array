// membuat array dengan menggunakan std  library array
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 7> myArray;

    for (int i = 0; i < 7; i++)
        myArray[i] = i+1;
    for (int i = 0; i < 7; i++)
        cout << "Alamat array dengan indeks " << i << " " << &myArray[i] << " dengan nilai " << myArray[i] << endl; 
    
    return 0;
}