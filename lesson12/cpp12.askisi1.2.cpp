/* cpp12.askisi1.2 */
#include <iostream>
#include <string>
using namespace std;


class movie {
  public:
    movie();
    movie(string in_title, double in_imdb_score, int in_weeks);
    virtual double score(); 
  private:
    string title; 
    double imdb_score; 
    int weeks; 
};


class thriller: virtual public movie {
  public:
    thriller(double in_fear_factor);
    thriller(string in_title, double in_imdb_score, int in_weeks, double in_fear_factor);
    virtual double score(); 
  protected:
    double fear_factor; 
};


class comedy: virtual public movie {
  public:
    comedy(double in_fun_factor);
    comedy(string in_title, double in_imdb_score, int in_weeks, double in_fun_factor);
    virtual double score(); 
  protected:
    double fun_factor; 
};

class comedy_thriller: public thriller, public comedy {
  public:
    comedy_thriller(string in_title, double in_imdb_score, int in_weeks, double in_fear_factor, double in_fun_factor);
    double score();
};


int main()
{
    thriller m1("It Chapter 2", 6.8, 10, 8.0);
    thriller m2("Us", 6.9, 30, 7.0);
    thriller m3("The Silence of Lambs", 8.6, 1540, 9.0);
    comedy m4("Jexi", 6.6, 4, 3.0);
    comedy_thriller m5("Addams Family", 5.9, 5, 3.0, 4.0);
    comedy_thriller m6("Shaun of the Dead", 7.9, 825, 4.0, 9.0);
    
    cout<<m1.score()<<endl; 
    cout<<m2.score()<<endl; 
    cout<<m3.score()<<endl; 
    cout<<m4.score()<<endl; 
    cout<<m5.score()<<endl; 
    cout<<m6.score()<<endl; 
    
    return 0;
}

movie::movie()
{}

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


thriller::thriller(double in_fear_factor)
{
    fear_factor = in_fear_factor; 
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


comedy::comedy(double in_fun_factor)
{
    fun_factor = in_fun_factor; 
}

comedy::comedy(string in_title, double in_imdb_score, int in_weeks, double in_fun_factor):
   movie(in_title, in_imdb_score, in_weeks)
{
    fun_factor = in_fun_factor; 
}


double comedy::score()
{
    return fun_factor*movie::score();
}


comedy_thriller::comedy_thriller(string in_title, double in_imdb_score, int in_weeks, double in_fear_factor, double in_fun_factor):
  movie(in_title, in_imdb_score, in_weeks), thriller(in_fear_factor), comedy(in_fun_factor)
{ }

double comedy_thriller::score()
{
    return ((fun_factor+fear_factor)/2)*movie::score();
}


