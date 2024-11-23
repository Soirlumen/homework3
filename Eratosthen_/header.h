#include <iostream>

//const int velikost_tabulky=33;
/*bool tabulka[velikost_tabulky];

void tabulec(bool tabulka[])
{for(int m=0;m<velikost_tabulky;m++){
    tabulka[m]=true;
}}

void init1(bool tabule[]){
    tabule[0]=false;
    tabule[1]=false;
}
bool je_dělitelné(int i, int j){
    return(((i%j)==0)?true:false); 
}

void hledam_prvocislo(bool tabule[], int l){
    int ctverec=l*l;
    for(int i=ctverec;i<velikost_tabulky;i++){
        if (je_dělitelné(i, l)){
            tabule[i]=false;
            std::cout<<"cislo "<<i<<" je delitelne " <<l<<std::endl;
        }
    }
}
void vypiš(bool tabule[]){
    std::cout<<"vypisuju prvocisla od 2 do "<<velikost_tabulky<<std::endl;
    int h=0;
    for (int k=0;k<velikost_tabulky;k++){
        if (tabule[k]){
            std::cout<<k<<std::endl;
            h++;
        }
    }
    std::cout<<"pocet vsech prvocisel: "<<h<<std::endl;
}

void škrtám_prvnočísla(bool tabule[]){
init1(tabule);
for (int j=2;j<velikost_tabulky;j++){
    hledam_prvocislo(tabule,j);
}
vypiš(tabule);
}
*/

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