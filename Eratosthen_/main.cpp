#include <iostream>
#include "header.h"
//prvni messy verze eratosthena který neni bezpecny a je strasne stinky

const int velikost_tabulky=33;
bool tabulka[velikost_tabulky];

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

int main()
{

   //int k=3;
   //int b=10;
   //bool mnam=je_dělitelné(k,b);
   //std::cout<<mnam;
    tabulec(tabulka);
    škrtám_prvnočísla(tabulka);

    return 0;
}