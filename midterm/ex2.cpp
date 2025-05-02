/*Modify the previous Structure so you will have another structure called Artist (including
artist details) and replace artistName of type string/char to artist of type Artist.
a. Print only songs of a specific Artist.*/
#include <iostream>
using namespace std;

struct Artist{
    string firstName, surname;
};

struct Song{

    string name,length, genre;
    Artist artist;

    void input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Length: ";
        cin >> length;
        cout << "Genre: ";
        cin >> genre;
        cout << "Artist name: ";
        cin >> artist.firstName;
        cout << "Artist surname: ";
        cin >> artist.surname;
        
    }

    void output()
    {
        cout << "\nName: " << name << "\nLength: " << length << "\nGenre: " << genre;
        cout << "\nArtist name: " << artist.firstName  << "\nArtist surname: " << artist.surname << endl;

    }
};

void findArtist(string name, Song songs[])
{
    for(int i = 0; i < 3; i++)
    {
        if(songs[i].artist.firstName== name)
        {
            songs[i].output();
        }
    }
}

int main()
{
    Song songs[3];
    Artist artists[3];

    for(int i = 0; i < 3; i++)
    {
        songs[i].input();
        //songs[i].output();
    }

    string artist;
    cout << "Give artsit name: ";
    cin >> artist;
    findArtist(artist, songs);

    return 0;
}