#ifndef _SEASONS_CPP_
#define _SEASONS_CPP_
#include "Season.h"
#include "Episode.cpp"
using namespace std;


Season::Season(int numberOfEpisodes){
    this->numberOfEpisodes=numberOfEpisodes;
}


void Season::addEpisode(int number){
    string Name;
    int Lenght = 0;
    cout<<"Give me the name of the episode "<<number+1<<": "<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, Name);
    cout<<"Give me the lenght of the episode: "<<endl;
    cin>>Lenght;
    IndexOfEpisodes.push_back(new Episode(Name,Lenght));
    
}


int Season::getNumberOfEpisodes() {
    return numberOfEpisodes;
}
string Season::getEpisode(int number){
    return "number "+ to_string(number+1)+" '"+IndexOfEpisodes[number]->getName() + "' has a lenght of " +to_string(IndexOfEpisodes[number]->getLenght())+" minute(s)";
}

int Season::getEpisodeLenght(int number){
    return IndexOfEpisodes[number]->getLenght();
}


#endif