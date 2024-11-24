#include <iostream>

template <typename T>
void vypiš(T t) 
{
    std::cout << t;
}
template<typename T, typename... Args>
void vypiš(T t, Args... args)
{
    std::cout << t;

    vypiš(args...) ;
}
int vstup();
bool je_dělitelné(int i, int j);
void vypištab(bool tabule[], int velikost_tabulky);
void hledam_prvocislo(bool tabule[], int l, int velikost_tabulky);
void init(bool tabule[]);
void eratosyto();