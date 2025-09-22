#include <iostream>
#include <string>

using namespace std;
struct Song {
    string title;
    Song* next;
};

Song* head = nullpt[r;
void addSong(string title) {
    Song* newSong = new Song();
    newSong->title = title;
    newSong->next = head;
    head = newSong;
}

void display() {
    Song* current = head;
    while (current != nullptr) {
        cout << current->title << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    string songTitle;
    
    cout << "Masukkan judul lagu pertama: ";
    getline(cin, songTitle);
    addSong(songTitle);
    
    cout << "Masukkan judul lagu kedua: ";
    getline(cin, songTitle);
    addSong(songTitle);
    
    cout << "\nPlaylist Anda:" << endl;
    display();
    
    return 0;
}
