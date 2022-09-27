#ifndef _CONTENT_CPP_
#define _CONTENT_CPP_
#include <stdexcept>
#include "Content.h"
using namespace std;

Content::Content(string ID, string Name, string Genre, int Rating) {
    setID(ID);
    setName(Name);
    setGenre(Genre);
    setRating(Rating);
}

string Content::getID() {
    return this->ID;
}

void Content::setID(string ID) {
    this->ID = ID;
}

string Content::getName() {
    return this->Name;
}

void Content::setName(string Name) {
    this->Name = Name;
}


string Content::getGenre() {
    return this->Genre;
}

void Content::setGenre(string Genre) {
    this->Genre = Genre;
}

int Content::getRating() {
    return this->Rating;
}

void Content::setRating(int Rating) {
try {
    if (Rating < 0 || Rating > 5) {
        cout<<"Rating must be in [0,5], automatically set to 0"<<endl;
        throw invalid_argument("Rating must be in [0,5], automatically set to 0");
    } 
    else {
        this->Rating = Rating;
    }
} 
catch (invalid_argument const &e) {
    this->Rating = 0;
}
}

#endif