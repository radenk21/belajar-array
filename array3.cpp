#include <iostream>

using namespace std;

int main()
{
    int myArray[] = {0,1,2,3,4,5,6,7,8,9};

    /* 
        melakukan looping dengan menggunakan for lain, yaitu:
        for(deklarasi variabel : namaArray)
        {
            statement
        }
     */

    // for berikut tidak dapat memanipulasi nilai array yang ada didalamnya, tetapi berguna untuk mencetak nilainya

    /* for(int nilaiArray : myArray)
    {
        cout << "address elemen " << &nilaiArray << " dengan nilai " << nilaiArray << endl;
    } 
    */

    // untuk memanipulasi nilai elemenya dapat menggunakan referencing, yakni:
   
    /* 
        melakukan looping dengan for referencing
        for(int &namaVariabel : namaArray)
        {
            statement
        }
     */
    // cout << endl;
    
    // memanipulasi nilai elemen, pada contoh kali ini dilakukan dengan cara mengalikan nilai itu sendiri dengan 2
    for (int &nilaiRef : myArray)
    {
        nilaiRef*=2;
    }
    
    for(int &nilaiRef : myArray)
    {
        cout << "address elemen " << &nilaiRef << " dengan nilai " << nilaiRef << endl;
    }
    // dapat dilihat setelah dirun, alamat yang dicetak adalah alamat dari setiap indeks array
    
        
    return 0;
}