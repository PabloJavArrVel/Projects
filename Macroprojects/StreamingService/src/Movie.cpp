#include "Movie.h"
using namespace std;
#ifndef _MOVIE_CPP_
#define _MOVIE_CPP_


Movie::Movie(string ID, string Name, string Genre, int Rating, int Lenght):Content(ID,Name,Genre,Rating){
    this->Lenght=Lenght;
}

bool Movie::operator>(const Movie& val) {
    if (Rating > val.Rating) {
        return true;
    }
    else {
        return false;
    }
}


bool Movie::operator<(const Movie& val) {
    if (Rating < val.Rating) {
        return true;
    }
    else {
        return false;
    }
}

int Movie::getLenght(){
    return Lenght;
}

void Movie::setLenght(int Lenght) {
    this->Lenght=Lenght;
}

string Movie::printInfo(){
    string info = "ID: " + getID() + "\n";
    info += "Name: " + getName() + "\n";
    info += "Genre: " + getGenre() + "\n";
    info += "Rating: " + to_string(getRating()) + "\n";
    info += "Lenght: " + to_string(getLenght()) +  "\n";
    return info;
}


#endif