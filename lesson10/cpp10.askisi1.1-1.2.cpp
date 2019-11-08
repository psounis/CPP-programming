/* cpp10.askisi1.1-1.2.cpp */

#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

class video {
  public:
    int get_duration() const;
    void set_video(string in_artist_name, string in_track_name, int in_duration);
    friend ostream &operator<<(ostream &left, video &right);
  private:
    string artist_name;
    string track_name; 
    int duration; 
};


class playlist {
  public:
    playlist(string in_name, string in_descr);
    void add_video(video in_video);
    friend ostream &operator<<(ostream &left, playlist &right);
  private:
    string name; 
    string descr; 
    int duration; 
    video videos[SIZE];
    int videos_size; 
};

int main()
{
    playlist l("my playlist", "the best songs");
    
    video temp; 
    
    temp.set_video("Mpagianteras", "Sa magemeno to mialo moy", 207);
    l.add_video(temp);
    temp.set_video("Sin Boy", "Mama", 400);
    l.add_video(temp);
    
    cout<<l; 
    return 0;
}




int video::get_duration() const
{
    return duration; 
}

void video::set_video(string in_artist_name, string in_track_name, int in_duration)
{
    artist_name = in_artist_name;
    track_name = in_track_name;
    duration = in_duration; 
}

ostream &operator<<(ostream &left, video &right)
{
    left<<"("<<right.artist_name<<","<<right.track_name<<","<<right.duration<<")";
    
    return left; 
}




playlist::playlist(string in_name, string in_descr)
{
    name = in_name; 
    descr = in_descr; 
    duration = 0; 
    videos_size = 0; 
}

void playlist::add_video(video in_video)
{
    videos[videos_size] = in_video; 
    videos_size++; 
    
    duration+=in_video.get_duration(); 
}

ostream &operator<<(ostream &left, playlist &right)
{
    left<<"["<<right.name<<","<<right.descr<<","<<right.duration;
    
    for (int i=0; i<right.videos_size; i++)
        left<<endl<<right.videos[i];
    
    left<<"]";
    
    return left; 
}