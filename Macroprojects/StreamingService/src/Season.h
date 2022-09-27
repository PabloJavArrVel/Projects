#ifndef _SEASONS_H_
#define _SEASONS_H_
#include <string>
#include <iostream>
#include <vector>
#include "Episode.cpp"
using namespace std;


class Season{
    private:
        vector <Episode*> IndexOfEpisodes;
        int numberOfEpisodes;
    public:
        Season(int numberOfEpisodes);
        int getNumberOfEpisodes();
        void addEpisode(int number);
        string getEpisode(int number);
        int getEpisodeLenght(int number);
};

#endif