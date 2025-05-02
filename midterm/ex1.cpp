/*Create a structure called Song with attributes name,length,genre and artistName.
a. On the main program create an array of songs and print all their details – without
functions.
b. Using functions input/output data for the array.
c. Print only songs that are on a specific genre. Ex -&gt; HipHop*/
#include <iostream>
using namespace std;

struct Song{

    string name,length, genre, artistName;

    void input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Length: ";
        cin >> length;
        cout << "Genre: ";
        cin >> genre;
        cout << "Artist name: ";
        cin >> artistName;
    }

    void output()
    {
        cout << "\nName: " << name << "\nLength: " << length << "\nGenre: " << genre << "\nArtist name: " << artistName << endl;

    }
};

void findGenre(string genre, Song songs[])
{
    for(int i = 0; i < 3; i++)
    {
        if(songs[i].genre == genre)
        {
            songs[i].output();
        }
    }
}

int main()
{
    Song songs[3];

    for(int i = 0; i < 3; i++)
    {
        songs[i].input();
        songs[i].output();
    }

    string genre;
    cin >> genre;
    findGenre(genre, songs);

    return 0;
}