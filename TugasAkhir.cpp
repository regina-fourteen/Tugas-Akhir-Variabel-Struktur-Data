#include <iostream>
#include <string>

using namespace std;

struct Song {
    string title;
    Song* next;
};

Song *head = NULL, *tail = NULL;

void addSong(const string& title) {
    Song* newSong = new Song();   
    newSong->title = title;       
    newSong->next = NULL;         

    if (head == NULL) {
        head = tail = newSong;
    } else {
        tail->next = newSong;
        tail = newSong;
    }
}

void display() {
    if (head == NULL) {
        cout << "Playlist kosong." << endl;
        return;
    }

    cout << "Playlist: ";
    Song* current = head;
    while (current != NULL) {
        cout << current->title;
        if (current->next != NULL) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

int main() {
    string songTitle;

    cout << "Masukkan judul lagu (ketik 'stop' untuk berhenti):\n";
    
    while (getline(cin, songTitle) && songTitle != "stop") {
        addSong(songTitle);
    }

    cout << "\n Daftar Lagu yang Diputar \n";
    display();


    while (head != NULL) {
        Song* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

