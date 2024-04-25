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
        if (START != NULL && nim == START->noMhs)
        {
            cout << " NIM sudah ada " << endl;
            return;
        }
        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }
    node* previous = START;
    node* current = START;

    while ((current != NULL) && (nim >= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "NIM sudah ada" << endl;
            return;
        }
        previous = current;
        current = current->next;
    }
    nodeBaru->next = current;
    previous->next = nodeBaru;
}
 bool searchNode(int nim, node* current, node* previous) {
    previous = START;
    current = START;
    while (current != NULL && nim > current->noMhs)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        return false;
    }
    else if (current->noMhs == nim)
    {
        return true;
    }
    else
    {
        return false;
    }
}

 bool deleteNode(int nim) {
     node* current = START;
     node* previous = START;
     if (searchNode(nim, previous, current) == false)
         return false;
     previous->next = current->next;
     if (current == START)
         START = current->next;
     return true;
 }

 bool listEmpty() {
     if (START == NULL)
         return true;
     else
         return false;
 }

 void traverse() {
     if (listEmpty()) {
         cout << "List Kosong" << endl;
         system("pause");
         system("cls");
         return;
     }
     else {
         node* currentnode = START;
         while (currentnode != NULL) {
             cout << "NIM: " << currentnode->noMhs << ", Nama: " << currentnode->name << endl;
             currentNode = currentNode->next;
         }
     }
 }

 void searchData() {
     if (listEmpty()) {
         cout << "List Kosong" << endl;
         system("pause");
         system("cls");
         return;
     }
     else {
         int nim;
         cout << "Masukkan NIM: ";
         cin >> nim;
         node* currentnode = START;
         while (currentnode != NULL) {
             if (currentnode->noMhs == nim) {
                 cout << "NIM: " << currentnode->noMhs << ", Nama: " << currentnode->name << endl;
                 return;
             }
             currentnode = currentnode->next;
         }
         cout << "Data tidak ditemukan" << endl;
     }
 }








int main()
{
    std::cout << "Hello World!\n";
}


