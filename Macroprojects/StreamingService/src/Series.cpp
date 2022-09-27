#ifndef _SERIES_CPP_
#define _SERIES_CPP_
#include "Series.h"
using namespace std;

Series::Series(string ID, string Name, string Genre, int Rating) : Content(ID, Name, Genre, Rating) {
}

bool Series::operator>(const Series& val) {
    if (Rating > val.Rating) {
        return true;
    }
    else {
        return false;
    }
}


bool Series::operator<(const Series& val) {
    if (Rating < val.Rating) {
        return true;
    }
    else {
        return false;
    }
}

int Series::getNumberOfSeasons() {
    return this->numberOfSeasons;
}

void Series::setNumberOfSeasons(int numberOfSeasons) {
    this->numberOfSeasons = numberOfSeasons;
}

vector<Season*> Series::getIndexOfSeasons() {
    return this->indexOfSeasons;
}

void Series::addSeason(int numberOfEpisodes) {
    indexOfSeasons.push_back(new Season(numberOfEpisodes));
    for(int i = 0; i < numberOfEpisodes; i++) {
        indexOfSeasons.back()->addEpisode(i);
    }
    numberOfSeasons=indexOfSeasons.size();
}

string Series::printInfo() {
    string info = "ID: " + getID() + "\n";
    info += "Name: " + getName() + "\n";
    info += "Genre: " + getGenre() + "\n";
    info += "Rating: " + to_string(getRating()) + "\n";
    info += "Number of seasons: " + to_string(getNumberOfSeasons()) + "\n";
    for (int i = 0;i<numberOfSeasons;i++){
        for (int j = 0; j < indexOfSeasons[i]->getNumberOfEpisodes();j++) {
            info+= "Episode " + indexOfSeasons[i]->getEpisode(j) + " and it's from season "+ to_string(i+1) +"\n";
        }
    }
    return info;
}
#endif