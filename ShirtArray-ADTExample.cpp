#include <iostream>

using namespace std;


const int nMax = 50;

struct lemari    {
    int baju[nMax];
    int maks;
    int no_laci;
};

void tambahData(lemari &C, int x);
void lihatData(lemari C);
int cariData(lemari C, int x);


void tambahData(lemari &C, int x) {
    C.no_laci++;
    if (C.maks > C.no_laci) {
        C.baju[C.no_laci] = x;
    } else {
        cout<<"laci sudah penuh"<<endl;
    }

}

void lihatData (lemari C) {
    for (int i=0; i<C.no_laci; i++) {
        cout<<C.baju[i]<<" ";
    }
    cout<<endl;
}

int cariData ( lemari C, int x) {
    for (int i = 0; i<=C.no_laci; i++) {
        if (C.baju[i] == x) {
            return i;
        }
    }
    return -1;
}



int main()
{
    //Inisisasi variabel
    lemari lem;
    lem.maks = 8;
    lem.no_laci=-1;

    //Menambahkan data & Output
    tambahData(lem, 6);
    lihatData(lem);

    tambahData(lem, 4);
    lihatData(lem);

    tambahData(lem, 0);
    lihatData(lem);

    tambahData(lem, 2);
    lihatData(lem);

    cout<<endl;

    //mencari indeks int i
    int i;
    i=cariData(lem, 8);
    cout<<i<<endl;
    i=cariData(lem, 6);
    cout<<i<<endl;
    return 0;
}
