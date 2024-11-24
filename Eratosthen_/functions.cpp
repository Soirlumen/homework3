 #include "header.h"

int vstup(){
    std::string l;
    vypiš("Zadej cele kladne cislo: ");
    std::cin >> l;
    try {
        int b = std::stoi(l);
        if (b > -1) {
            return b;
        } else {
            vypiš("zadane cislo '",b,"' neni kladne.\n");
        }
    } catch (std::out_of_range&) {
        vypiš("cislo moc velke.\n");
    }
    catch (std::invalid_argument){
        vypiš("zadana vec neplatna.\n");
    }
    return -1;
}

bool je_dělitelné(int i, int j){
    return(((i%j)==0)?true:false); 
}

void vypištab(bool tabule[], int velikost_tabulky){
    std::cout<<"vypisuju prvocisla od 2 do "<<velikost_tabulky-1<<std::endl;
    int h=0;
    for (int k=0;k<velikost_tabulky;k++){
        if (tabule[k]){
            vypiš(k,"\n");
            h++;
        }
    }
    vypiš("pocet vsech prvocisel: ", h);
}

void hledam_prvocislo(bool tabule[], int l, int velikost_tabulky)
{
    int ctverec=l*l;
    for(int i=ctverec;i<=velikost_tabulky;i++){
        if (je_dělitelné(i, l)){
            tabule[i]=false;
            //vypiš(i," je delitelne ",l,"\\n");
            //std::cout<<"cislo "<<i<<" je delitelne " <<l<<std::endl;
        }
    }
}

void init(bool tabule[])
{
    tabule[0]=false;
    tabule[1]=false;
}

void eratosyto()
{
    int velikostTabulky = vstup()+1;
    //musim davat pozor, protoze chci pracovat s tabulkou od 0 do vstupniho cisla, takže o 1 vetsi nez zadal uzivatel
    switch (velikostTabulky) 
    {
    case -1:
        vypiš("koncim program papa.");
        break;
    case 1:
    case 2:
        vypiš("nebudu delat tabulku s velikosti ", velikostTabulky-1,", koncim program papa.");
        break;
    
    default:
        bool * pole = new bool [velikostTabulky];
        std::fill_n(pole, velikostTabulky, 1);
        init(pole);
        for (int j=2;j<=velikostTabulky;j++)
        {
            hledam_prvocislo(pole,j, velikostTabulky);
        }
        vypištab(pole,velikostTabulky);
        delete [] pole;
    }
}