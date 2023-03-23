#include <iostream>

using namespace std;

int main()
{
    int nilai[5] = {1, 2, 3, 4, 5};
/* 
    cout << "Alamat array indeks 0 " << &nilai[0] << endl;
    cout << "Alamat array indeks 1 " << &nilai[1] << endl;
    cout << "Alamat array indeks 2 " << &nilai[2] << endl;
    cout << "Alamat array indeks 3 " << &nilai[3] << endl;
    cout << "Alamat array indeks 4 " << &nilai[4] << endl;
 */
    // cout << endl << "dengan loop" << endl;

    for (int i = 0; i < 5; i++)
        cout << "Alamat array indeks " << i << " " << &nilai[i] << " dengan nilai " << nilai[i] << endl;
    
    cout << endl << "Alamat sesudah perubahan nilai dengan pointer: " << endl;
    
    // mengakses array dengan pointer, kalau array tidak menggunakan ampersant(&) saat mendeklarasikan pointernya
    // karena array merupakan alamat yang memiliki indeks
    int *ptr = nilai; // memberikan alamat nilai ke pointer
    *(ptr + 2) = 6;   // mengubah nilai array melalui pointer dengan + 2 yang maksudnya adalah alamat dari array tersebut menjadi 6

    for (int i = 0; i < 5; i++)
        cout << "Alamat array indeks " << i << " " << &nilai[i] << " dengan nilai " << nilai[i] << endl;
    
    return 0;
}