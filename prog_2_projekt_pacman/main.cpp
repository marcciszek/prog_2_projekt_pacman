#include "Game.h"

//todo
//smierc gracza
//poowne rozpoczecie po wygranej/przegranej


int typ_menu = 1;                               //Zmienna przelacznika typu menu -> 1: MENU; 2: GRA;
bool czy_wlaczona = true;                       //Zmienna logiczna -> potrzeba do petli glownej programu
bool gra_aktywna = false;
int stan_gry = 0;                               //domyslnie 0, 1 to wygrana, 2 to przegrana
rozmiar_okna rozmiar_menu = { 800,600 };
rozmiar_okna rozmiar_gry = { 800, 600 };

Game gra;                                        //Obiekt klasy Game -> definicja w pliku "Game.h" -> okno okna gry
Game menu;                                       //Obiekt klasy Game -> definicja w pliku "Game.h" -> okno menu glownego

int main()
{
    if (!font.loadFromFile("grafiki/FrederickatheGreat-Regular.ttf"))
    {
        std::cerr << "font problem" << std::endl;
    }
    menu.Init(rozmiar_menu.x, rozmiar_menu.y);                            //Inicjalizacja okienka menu -> (float x, float y) -> x: szerokosc okna; y: wysokosc okna;

    while (czy_wlaczona) {                                                //Petla glowna programu
        switch (typ_menu) {                                               //Przelacznik typu okna -> 1: MENU; 2: GRA; 3: OPCJE;
        case 1:
            menu.Render();                                                //Uzycie funkcji render dla menu glownego -> definicja w "Game.h"
            break;
        case 2:
            gra.Render();                                                 //Uzycie funkcji render dla okna glownego gry -> definicja w "Game.h"
            break;
        }
    }
}
