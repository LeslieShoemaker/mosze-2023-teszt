#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{   
    //nem definiált a használatban lévő változó
    int *b = new int[N_ELEMENTS];

    //hiányzó sorvégi ;
    std::cout << '1-100 ertekek duplazasa';

    //szintaktikailag hibás for loop
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    //hibásan működő ciklus, rossz a feltétel
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //nem írja ki az értékeket
        std::cout << "Ertek:" << b[i];
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;


    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //hiányzó sorvégi ;
        atlag += b[i];
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //nem szabadítjuk fel a tömböt
    delete b;
    return 0;
}
