#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 11> nilaiMhs;

    for (int i = 0; i < nilaiMhs.size(); i++)
    {
        cout << "Mahasiswa dengan nilai ";
        if(i == 0){
            cout << "0-9: ";
        }
        else if(i == 10){
            cout << "100: ";
        }
        else{
            cout << i*10 << "-" << (i*10) + 9 << ": ";
        }
        cin >> nilaiMhs[i];
    }

    cout << endl << "Cetak dengan loop" << endl;

    for (int i = 0; i < nilaiMhs.size(); i++)
    {
        cout << "Mahasiswa dengan nilai ";
        if(i == 0){
            cout << "0-9: ";
        }
        else if(i == 10){
            cout << "100: ";
        }
        else{
            cout << i*10 << "-" << (i*10) + 9 << ": ";
        }
        for (int j = 0; j < nilaiMhs[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        
    return 0;
}