//Etapa 1
// Vasim ukolem je vytvorit obchod ktery ma funkce:
// nakup zbozi ze min. 2 kategorii
// kazde zbozi muze uzivatel koupit xkrat a ma svuj cenovy koeficient
// po ukonceni nakupu dostane uzivatel uctenku s celkovou cenou

//etapa 2
// uctenka zobrazi polozky ktere uzivatel koupil
// uctenka vygeneruje 2 nahodne kody FIK a PKN(formát:_ _ _ _ a _ _ _ _ _ _ (nahodne cisla)
// uzivatel si bude moct zvolit zpusob platby, karta kde bude muset zadaz PIN aby prosla platba (PIN muze byt vzdy stejny)
// pridejte 3. kategorii zbozi ktera bude mit 2 cenove kategorie se slevou 15% (zada slevovy kod - ILOVEPROGRAMOVANI), beze slevy. Uzivatel si muze zvolit mezi temito kategoriemi

//etapa 3
// --- okomentujte vsechny: funke, switche, podivne pojmenovane promenne (napr. wtf = 5;)
// pokud uzivatel nakoupil za vice jak x(zvolte vy) oznamte ze vyhral lednici
// --- bonus: vytvorte sanci 1ku100 ze uzivatel bude mit nakup zadarmo

//etapa 4
// pridejte nahodne generovane: cislo prodejny a pokladny, jmeno pokladniho: Pepa, Veronika, Hammond
// soubor zazipujte a poslete na mail


#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {





//---PROMENNE



//---------uzivatelovo penize
double zustatek = 5000;
int heslo = 123456;

int kategorie;

int pecivo;
int zelenina;
int napoje;

int platba;

int pin;

int counter = 0;
int celkem;

int polozky;

int pokracovat;
int kosik;

int kupon;

//------------hodnoty rohliku
int pocetrohliku = 0;
int rohliky = 0;
double cenarohliku = 2;
//------------hodnoty chleba
int pocetchlebu = 0;
int chleby = 0;
double cenachlebu = 29;
//------------hodnoty okurky
int pocetokurek = 0;
int okurky = 0;
double cenaokurky = 14;
//------------hodnoty jablka
int pocetjablek = 0;
int jablka = 0;
double cenajablka = 5;
//------------hodnoty vody
int pocetvody = 0;
int vody = 0;
double cenavody = 14;
//------------hodnoty cocacola
int pocetcola = 0;
int cola = 0;
double cenacola = 32;

string sleva;





//---HLAVNI MENU/KATEGORIE



//------------------menu1
do {
menu1:system ("cls");
cout << "Obchod" << "\n" << "*AKCE - UTRATTE VICE NEZ 2500 KC A VYHRAJTE ZBRUSU NOVOU LEDNICI*" << "\n"
<< "1. pecivo" << "\n" << "2. ovoce a zelenina" << "\n" << "3. napoje" << "\n" << "4. pokracovat do kosiku" << "\n" ;
cin >> kategorie;

//-------------------------------------------------------------------switch(kategorie)

switch (kategorie) {
//--------------------case 1 - pecivo
case 1:
system ("cls");
cout << "pecivo" << "\n" << "1. rohliky - " << cenarohliku << " Kc" << "\n" << "2. chleby - " << cenachlebu << " Kc" << "\n";
cin >> pecivo;
//----------------------------------------------------------------------switch(pecivo)
 switch (pecivo) {
//----------------------rohliky
 case 1:
 system ("cls");
 cout << "rohliky" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetrohliku;
 rohliky = pocetrohliku + rohliky;
 system ("cls");
 cout << "rohlik " << rohliky << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;
//----------------------chleby
 case 2:
 system ("cls");
 cout << "chleby" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetchlebu;
 chleby = pocetchlebu + chleby;
 system ("cls");
 cout << "chleba " << chleby << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;
 }
break;


//--------------------case 2 - ovoce a zelenina
case 2:
system ("cls");
cout << "ovoce a zelenina" << "\n" << "1. okurky - " << cenaokurky << " Kc" << "\n" << "2. jablka - " << cenajablka << " Kc" << "\n";
cin >> zelenina;
//----------------------------------------------------------switch(zelenina)
 switch (zelenina) {

 //----------------------okurky
 case 1:
 system ("cls");
 cout << "okurky" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetokurek;
 okurky = pocetokurek + okurky;
 system ("cls");
 cout << "okurka " << okurky << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;
//----------------------jablka
 case 2:
 system ("cls");
 cout << "jablka" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetjablek;
 jablka = pocetjablek + jablka;
 system ("cls");
 cout << "jablko " << jablka << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;

  }

break;
//--------------------case 3 - napoje
case 3:
system ("cls");
cout << "napoje" << "\n" << "1. voda - " << cenavody << " Kc"  << "\n" << "2. cocacola - " << cenacola << " Kc"  << "\n";
cin >> napoje;
//----------------------------------------------------------switch(napoje)

 switch (napoje) {

 //----------------------voda
 case 1:
 system ("cls");
 cout << "voda" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetvody;
 vody = pocetvody + vody;
 system ("cls");
 cout << "voda " << vody << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;
//----------------------cocacola
 case 2:
 system ("cls");
 cout << "cocacola" << "\n" << "zadejte pocet" << "\n";
 cin >> pocetcola;
 cola = pocetcola + cola;
 system ("cls");
 cout << "cocacola " << cola << " ks bylo pridano do vaseho kosiku" << "\n";
 cout << "\n" << "Chcete pokracovat v nakupu?" << "\n" << "1. pokracovat v nakupu" << "\n" << "2. jit do kosiku" << "\n";
 cin >> pokracovat;
 break;

}
break;
//-------------------case 4 - jit do kosik
case 4:
pokracovat = 2;
break;
 }

} while (pokracovat != 2);





//---KOSIK



kosik:system ("cls");

celkem = rohliky * cenarohliku + chleby * cenachlebu + okurky * cenaokurky + jablka * cenajablka + vody * cenavody + cola * cenacola;

cout << "Vas kosik" << "\n";
if (celkem > 2500) {
cout << "*MATE NAROK NA LEDNICI ZDARMA*" << "\n";
}
polozky:system ("cls");
cout << "polozky" << "\n";
if (rohliky > 0) {
cout << "rohlik   " << rohliky << " Ks " << cenarohliku * rohliky << " Kc" << "\n";
}
if (chleby > 0) {
cout << "chleba   " << chleby << " Ks " << cenachlebu * chleby << " Kc" << "\n";
}
if (okurky > 0) {
cout << "okurky   " << okurky << " Ks " << cenaokurky * okurky << " Kc" << "\n";
}
if (jablka > 0) {
cout << "jablko   " << jablka << " Ks " << cenajablka * jablka << " Kc" << "\n";
}
if (vody > 0) {
cout << "voda     " << vody << " Ks " << cenavody * vody << " Kc" << "\n";
}
if (cola > 0) {
cout << "cocacola " << cola << " Ks " << cenacola * cola << " Kc" << "\n";
}
if (celkem > 2500) {
cout << "\n" << "*EXTRA*" << "\n" << "lednice  1 ks" << "\n\n";
}
cout << "\n" << "1 pokracovat v nakupu" << "\n"  << "2 vyuzit slevovy kupon" << "\n" << "3 zaplatit" << "\n";
cin >> kosik;

//----------------------------------------------------------switch(kosik)

 switch (kosik) {

case 1:
goto menu1;
break;

case 2:
system ("cls");
cout << "zadejte kod" << "\n";
cin >> sleva;
if (sleva == "ILOVEPROGRAMOVANI") {
cout << "vas kod byl prijat - sleva 15%" << "\n";
kupon = 1;
Sleep (1500);
goto polozky;
} else {
cout << "zadali jste nespravny kod" << "\n";
Sleep (1500);
goto polozky;
 }
break;

//---------------------zaplatit
case 3:
platba:system ("cls");
cout << "Vyberte zpusob platby" << "\n" << "1 kartou" << "\n" << "2 hotove";
cin >> platba;
switch (platba) {
case 1:
system ("cls");
pin:
cout << "zadejte PIN" << "\n";
cin >> pin;
if (pin == heslo) {
while(counter < 3) {
system ("cls");
cout << "prosime chvilku vydrzte.";
Sleep(500);
cout << ".";
Sleep(500);
cout << ".";
Sleep(500);
counter = counter + 1;
} } else {
system ("cls");
cout << "zadali jste spatne heslo, zkuste znovu" << "\n";
goto pin;
}
break;

case 2:
while(counter < 3) {
system ("cls");
cout << "Zaplatte a chvilku vydrzte.";
Sleep(500);
cout << ".";
Sleep(500);
cout << ".";
Sleep(500);
counter = counter + 1;
}
system ("cls");
goto uctenka;
break;
}
}




//---UCTENKA



system ("cls");
if (celkem > zustatek) {
cout << "Platba neprobehla. Prekrocili jste vas denni limit. Odstrante nektere zbozi a zkuste znovu" << "\n" << "ENTER - vratit se do kosiku" << "\n";
cin.ignore();
getchar();
goto kosik;
} else {
uctenka:system ("cls");
cout << "Platba probehla uspesne. Dekujeme za nakup";
Sleep(1500);
system ("cls");
cout << "produkt   pocet   cena za 1   cena celkem" << "\n";

//----------------------------------------------------------pocet rohliku
while (rohliky > 0) {
cout << "rohliky   " << rohliky;
if (rohliky > 0; rohliky < 10) {
cout << "       " << cenarohliku << " Kc";
cout << "        " << rohliky * cenarohliku << " Kc";
 } else if (rohliky > 10; rohliky < 100) {
cout << "      " << cenarohliku << " Kc";
cout << "        " << rohliky * cenarohliku << " Kc";
} else {
cout << "     " << cenarohliku << " Kc";
cout << "        " << rohliky * cenarohliku << " Kc";
 }
cout << "\n";
break;
}
//----------------------------------------------------------pocet chlebu
while (chleby > 0) {
cout << "chleby    " << chleby;
if (chleby > 0; chleby < 10) {
cout << "       " << cenachlebu << " Kc";
cout << "       " << chleby * cenachlebu << " Kc";
 } else if (chleby > 10; chleby < 100) {
cout << "      " << cenachlebu << " Kc";
cout << "       " << chleby * cenachlebu << " Kc";
} else {
cout << "     " << cenachlebu << " Kc";
cout << "       " << chleby * cenachlebu << " Kc";
 }
cout << "\n";
break;
}
//----------------------------------------------------------pocet okurek
while (okurky > 0) {
cout << "okurky    " << okurky;
if (okurky > 0; okurky < 10) {
cout << "       " << cenaokurky << " Kc";
cout << "       " << okurky * cenaokurky << " Kc";
 } else if (okurky > 10; okurky < 100) {
cout << "      " << cenaokurky << " Kc";
cout << "       " << okurky * cenaokurky << " Kc";
} else {
cout << "     " << cenaokurky << " Kc";
cout << "       " << okurky * cenaokurky << " Kc";
 }
cout << "\n";
break;
}
//----------------------------------------------------------pocet jablek
while (jablka > 0) {
cout << "jablka    " << jablka;
if (jablka > 0; jablka < 10) {
cout << "       " << cenajablka << " Kc";
cout << "        " << jablka * cenajablka << " Kc";
 } else if (jablka > 10; jablka < 100) {
cout << "      " << cenajablka << " Kc";
cout << "        " << jablka * cenajablka << " Kc";
} else {
cout << "     " << cenajablka << " Kc";
cout << "        " << jablka * cenajablka << " Kc";
 }
cout << "\n";
break;
}
//----------------------------------------------------------pocet vod
while (vody > 0) {
cout << "vody      " << vody;
if (vody > 0; vody < 10) {
cout << "       " << cenavody << " Kc";
cout << "       " << vody * cenavody << " Kc";
 } else if (vody > 10; vody < 100) {
cout << "      " << cenavody << " Kc";
cout << "       " << vody * cenavody << " Kc";
} else {
cout << "     " << cenavody << " Kc";
cout << "       " << vody * cenavody << " Kc";
 }
cout << "\n";
break;
}
//----------------------------------------------------------pocet cocacol
while (cola > 0) {
cout << "cocacola  " << cola;
if (cola > 0; cola < 10) {
cout << "       " << cenacola << " Kc";
cout << "       " << cola * cenacola << " Kc";
 } else if (cola > 10; cola < 100) {
cout << "      " << cenacola << " Kc";
cout << "       " << cola * cenacola << " Kc";
} else {
cout << "     " << cenacola << " Kc";
cout << "       " << cola * cenacola << " Kc";
 }
cout << "\n";
break;
}



//--------------------cena celkem za nakup

cout << "\n" << "cena celkem: " << celkem << " Kc" << "\n";
if (kupon == 1) {
cout << "sleva - 15%" << "\n";
cout << "vysledna cena = " << celkem * 0.85 << " Kc" << "\n\n";
}
if (celkem > 2500) {
cout << "*EXTRA*" << "\n" << "lednice 1 ks" << "\n\n";
}

srand ((unsigned)time(NULL));
int randomp = (rand() % 10);
int randompr = (rand() % 100);

cout << "c. pokladny: KASA" << randomp << "\n" << "c. prodejny: " << randompr << "\n" << "Pokladni: ";

srand(time(NULL));
int r = rand()%3;

if(r == 0) {
cout << "Pepa";
} else if (r == 1) {
cout << "Veronika";
} else {
cout << "Hammond";
}
cout << "\n";

//--------------------random number generator
srand ((unsigned)time(NULL));

cout << "\n";
for(int i =1; i<=4; i++) {
int random = (rand() % 10);
cout << random;
}
cout << " ";

for(int i =1; i<=6; i++) {
int random1 = (rand() % 10);
cout << random1;
}


}//if else



}//------------------------------KONEC---------------------------------------------
