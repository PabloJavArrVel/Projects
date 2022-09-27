#ifndef _SERIES_H_
#define _SERIES_H_
#include "Content.cpp"
#include "Season.cpp"
#include <vector>
using namespace std;


class Series : public Content {
    
    private:
        int numberOfSeasons;
        vector<Season*> indexOfSeasons;
    public:
        Series(string, string, string, int);
        int getNumberOfSeasons();
        void setNumberOfSeasons(int numberOfSeasons);
        vector<Season*> getIndexOfSeasons();
        void addSeason(int numberOfEpisodes);
        bool operator<(const Series& val);
        bool operator>(const Series& val);
        string printInfo() override;
};

#endif