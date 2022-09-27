#ifndef _CONTENT_H_
#define _CONTENT_H_

#include <string>
#include <iostream>

using namespace std;

class Content {

protected:
    string ID;
    string Name;
    string Genre;
    int Rating;

public:
    Content(string, string, string,int);
    string getID();
    void setID(string);
    string getName();
    void setName(string);
    string getGenre();
    void setGenre(string);
    int getRating();
    void setRating(int);
    virtual string printInfo() = 0;
};

#endif