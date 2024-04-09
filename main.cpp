#include "library.hpp"

int main()
{
    Book book1("Karl May", "Winettou", 1);
    Book book2("Mark Twain", "Tom Sayer", 1);
    Book grandmaBook("Lev Tolstoi", "Krieg und Frieden", 1);

    Library SzaboErvin;       // Leere Bibliothek
    Library Omikk;            // Leere Bibliothek
    Library MyBooks(book1); // Biblothek inizialisiert durch book1

    SzaboErvin.add(book1); // Ich schenke book1 an SzaboErvin Bibliothek
    MyBooks -= book1;      // Ich nehme book1 aus von meinem MyBooks Bibliothek
    SzaboErvin += grandmaBook;   //Ich schenke grandmaBook and SzaboErvin Bibliothek

    std::cout << SzaboErvin << std::endl; // Alle Buecher im Bibliothek mit Author + Titel auf dem Bildschirm ausgeben.
    std::cout << MyBooks << std::endl; // Alle Buecher im Bibliothek mit Author + Titel auf dem Bildschirm ausgeben.

    Omikk += SzaboErvin; // Omikk kauft alle Buecher von SzaboErvin, SzaboErvin wird Leer sein.
    std::cout << MyBooks << std::endl;

    return 0;
}