#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    Stocznia     stocznia{};
    unsigned int liczba_zaglowcow = 0;
    unsigned int dotychczasowy_towar=0;
    if (towar == 0) {
        return 0;
    }
    else {
        while (dotychczasowy_towar <= towar) {
            Statek* s = stocznia(); // stworz statek
            dotychczasowy_towar += s->transportuj();

            if(dynamic_cast<Zaglowiec *>(s) != 0)
            {
            liczba_zaglowcow++;
            }
        }
        return liczba_zaglowcow;
    }
}