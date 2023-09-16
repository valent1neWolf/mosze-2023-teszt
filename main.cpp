#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    //hibás a változó neve
    std::cout << '1-100 ertekek duplazasa'  //a sor nincs lezárva és hiányzik a ";"
    for (int i = 0;)        //hiányosak a loop paraméterei
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     //itt is hiányosak a loop paraméterei
    {
        std::cout << "Ertek:"       //nem irassa ki a kívánt értékeket és hiányzik a sor lezárása
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)        //N_ELEMENTS után ";" kell nem pedig ","
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;       //hiányzik a dinamikusan lefoglalt memória felszabadítása
}
