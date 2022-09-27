#ifndef _EPISODE_H_
#define _EPISODE_H_
#include <string>
using namespace std;

class Episode{
    private:
        string Name;
        int Lenght;
    public:
        Episode(string,int);
        string getName();
        int getLenght();
};


#endif