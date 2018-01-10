#include <iostream>
#include <vector>
#include <algorithm> // std::sort()

int main()
{
    // std::vector<float> v1;
    // std::vector<std::string> v2;
    // std::vector<char> v3;
    // vector moze przechowywac wartosci dowolnego typu
    std::vector<int> vec;
    vec.push_back(35); // dodaj 35 na koniec vectora
    vec.push_back(-20); // dodaj -20 na koniec vectora

    vec.pop_back(); // usun ostatni element vectora

    vec.insert(vec.begin(), 25); // dodaj 25 na poczatek vectora
    // std::cout << vec[0]; // 25!

    vec.push_back(40);
    vec.push_back(340);
    vec.push_back(120);
    vec.push_back(570);

    // ale jak wyswietlic vector?
    /*
    for(int i = 0; i < vec.size(); ++i){
        std::cout << vec[i] << ' ';
    }
    */

    std::cout << "Nasz wektor ma: " << vec.size() << " elementow!" << std::endl;

    for(int a : vec) // ranged-based for
        std::cout << a << ' ';

    std::cout << std::endl;
    std::string z = "to jest jakies zdanie";

    for(char c : z) // ranged-based for
        std::cout << c << ' ';


    std::cout << std::endl;
    std::cout << std::endl;

    vec.push_back(97);
    vec.push_back(0);

    for(int a : vec) // ranged-based for
        std::cout << a << ' ';

    std::cout << std::endl;
    std::cout << std::endl;

    // std::sort(vec.begin(), vec.end()); // sortuje od poczatku vec do konca
    std::sort(vec.begin(), vec.begin() + 5); // sortujemy 5 elementow od poczatku

    for(int a : vec) // ranged-based for
        std::cout << a << ' ';

    std::cout << std::endl;
    std::cout << std::endl;

    std::vector<std::vector<int>> matrix; // szuflada szuflad / dwuwymiarowa tablica
}