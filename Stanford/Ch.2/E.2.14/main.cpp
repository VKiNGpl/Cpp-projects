#include <iostream>

using namespace std;

struct book
{
    string title = {"notitle"};
    string authors[5] = {" ", " ", " ", " ", " "};
    string LoCoNum = {" "};
    string subHead[5] = {" ", " ", " ", " ", " "};
    string pubEnt = {" "};
    int pubDate = {0};
    bool circ = {false};

};
struct libraryT
{
    int nBooks;
    book* bookRecord;
};

libraryT* booksRec(int);
void searchBySubject(libraryT*, string);

int main()
{
    libraryT* libPtr;
    int nHowMany;
    cout << "How many books in the new record?: "; cin >> nHowMany; cin.ignore();
    libPtr = booksRec(nHowMany);
    libPtr->nBooks = nHowMany;
    for (int i=0; i<nHowMany; i++)
    {
        cout << libPtr->bookRecord[i].title << endl;
        cout << libPtr->bookRecord[i].authors[0] << endl;
        cout << libPtr->bookRecord[i].LoCoNum << endl;
        cout << libPtr->bookRecord[i].subHead[0] << endl;
        cout << libPtr->bookRecord[i].pubEnt << endl;
        cout << libPtr->bookRecord[i].pubDate << endl;
        cout << libPtr->bookRecord[i].circ << endl;
    }
    string sSubject;
    getline(cin, libPtr->bookRecord[0].subHead[3]);
    cout << "Enter the subject name to display books containing the subject: ";
    cin >> sSubject; cin.ignore();
    searchBySubject(libPtr, sSubject);

    return 0;
}
libraryT* booksRec(int n)
{
    libraryT* newPtr;
    newPtr = new libraryT;
    newPtr->bookRecord = new book[n];

    return newPtr;
}
void searchBySubject(libraryT* P, string s)
{
    for (int i=0; i<P->nBooks; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (P->bookRecord[i].subHead[j] == s)
            {
                cout << P->bookRecord[i].title << endl;
                cout << P->bookRecord[i].authors[0] << endl;
                cout << P->bookRecord[i].LoCoNum << endl;
                j=5;
            }
        }
    }
}
