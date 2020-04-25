# Parametry projektu

Nazwa: pm-lab-2  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na drugie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 24.04.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Łukasz Drozd 
Numer albumu: 53371
Grupa studencka: WEL18EX1N1

# Pytania do zadań z instrukcji

2.2.1 W jaki sposób można określić czas trwania opóźnienia zrealizowanego z użyciem pętli?

Skorzystać z biblioteki Arduino 
Wtedy: użyć funkcji millis() do zmiennej currentmillis przed wykonaniem pętli i po wykonaniu pętli a następnie odjąć wynik ... currentmillis - millis();

Lub policzyć ilość przerwać 
CZAS[us] = ( ILOSC_PRZERWAN * 1024 ) + ( BIEZACA_WARTOSC_TIMERA * 4 )