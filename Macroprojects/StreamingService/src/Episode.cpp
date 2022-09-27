#ifndef _EPISODE_CPP_
#define _EPISODE_CPP_
#include "Episode.h"
using namespace std;

Episode::Episode(string Name, int Lenght){
    this->Name=Name;
    this->Lenght=Lenght;
};

string Episode::getName(){
    return Name;
}

int Episode::getLenght(){
    return Lenght;
}
#endif