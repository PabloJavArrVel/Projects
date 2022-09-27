#include "Content.cpp"
#include "Series.cpp"
#include "Movie.cpp"
#include <vector>
using namespace std;

/*
    By:Pablo Javier Arreola Velasco (A01747824)
    On:9th of July 2022
    Notes:Print info uses all the getters of each class, the constructor also uses
    every setter of the class, that's why you won't see any usage of those methods
    in this testing (they've already been proven to work as they print the info
    and set the attributes of the class on the constructor), there's also some errors
    while retrieving data with cin, no more than one word is allowed
*/

int main (){
    int opcion=0,duracion, rating, numeroTemporadas, numeroEpisodios;
    string nombre, id, genero;
    cout<<"Welcome, choose an option: "<<endl;
    cout<<"Press 1 to create a new movie and print its data"<<endl;
    cout<<"Press 2 to create a new series and print its data"<<endl;
    cout<<"Press anyother key to exit"<<endl;
    while(opcion <= 2 || opcion >= 0) {
        cout<<"Please choose (again?)"<<endl;
        cin>>opcion;
        if (opcion==0 || opcion > 2 || opcion < 0){
            return 0;
        }
        if (opcion==1) {
            cout<<"Give me the name of the movie: ";
            cin>>nombre;
            cout<<"Give me the id of the movie: ";
            cin>>id;
            cout<<"Give me the genre of the movie: ";
            cin>>genero;
            cout<<"Give me the rating of the movie: ";
            cin>>rating;
            cout<<"Give me the lenght of the movie: ";
            cin>>duracion;
            Movie m1(id, nombre, genero, rating,duracion);
            cout<<m1.printInfo();
        }
        if (opcion==2) {
            cout<<"Give me the name of the series: ";
            cin>>nombre;
            cout<<"Give me the id of the series: ";
            cin>>id;
            cout<<"Give me the genre of the series: ";
            cin>>genero;
            cout<<"Give me the rating of the series: ";
            cin>>rating;
            cout<<"Give me the number of seasons: ";
            cin>>numeroTemporadas;
            Series s1(id, nombre, genero, rating);
            for (int i=0;i<numeroTemporadas;i++) {
                cout<<"Give me the number of episodes of season "<<to_string(i+1)<<": ";
                cin>>numeroEpisodios;
                s1.addSeason(numeroEpisodios);
            }
            cout<<s1.printInfo();
        }
        
    }
}
