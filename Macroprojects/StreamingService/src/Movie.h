#include "Content.h"
#include <string.h>
#ifndef _MOVIE_H_
#define _MOVIE_H_

using namespace std;

class Movie: public Content {
    private:
        int Lenght;
    public:
        Movie(string ID, string Name, string Genre,int Rating,int Lenght);
        bool operator<(const Movie& val);
        bool operator>(const Movie& val);
        int getLenght();
        void setLenght(int Lenght);
        string printInfo() override;
};

#endif