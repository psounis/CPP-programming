/* cpp12.askisi1.1.cpp */
#include <iostream>
#include <string>
using namespace std;


class movie {
  public:
    movie(string in_title, double in_imdb_score, int in_weeks);
    virtual double score(); 
  private:
    string title; 
    double imdb_score; 
    int weeks; 
};


class thriller: public movie {
  public:
    thriller(string in_title, double in_imdb_score, int in_weeks, double in_fear_factor);
    double score(); 
  private:
    double fear_factor; 
};


int main()
{
    thriller m1("It Chapter 2", 6.8, 10, 8.0);
    thriller m2("Us", 6.9, 30, 7.0);
    thriller m3("The Silence of Lambs", 8.6, 1540, 9.0);
    
    cout<<m1.score()<<endl; 
    cout<<m2.score()<<endl; 
    cout<<m3.score()<<endl; 
    
    return 0;
}

movie::movie(string in_title, double in_imdb_score, int in_weeks)
{
    title = in_title;
    imdb_score = in_imdb_score;
    weeks = in_weeks; 
}

double movie::score()
{
    return imdb_score/(0.5*weeks);
}


thriller::thriller(string in_title, double in_imdb_score, int in_weeks, double in_fear_factor):
   movie(in_title, in_imdb_score, in_weeks)
{
    fear_factor = in_fear_factor; 
}

double thriller::score()
{
    return fear_factor*movie::score();
}