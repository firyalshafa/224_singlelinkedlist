// pertemuan8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node {
    int noMhs;
    string name;
    node* next;
};

node* START = NULL;

void addnode() {
    int nim;
    string nama;
    node* nodeBaru = new node();
    cout << "masukan nim: ";
    cin >> nim;
    cout << "masukkan nama :";
    cin >> nama;
    nodeBaru-> noMhs = nim;
    nodeBaru->name = nama;

    if (START == NULL || nim <= START->noMhs) {

    }
}

int main()
{
    std::cout << "Hello World!\n";
}


