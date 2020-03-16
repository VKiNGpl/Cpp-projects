#include <iostream>

using namespace std;

class CBook
{
private:
    string m_sTitle;
    string m_sAuthor;
    string m_sPublisher;
    int m_nPubYear;
    int m_nNumPages;

public:
    string GetTitle() {return m_sTitle;}
    void SetTitle(string sTitle) {m_sTitle = sTitle;}
    string GetAuthor() {return m_sAuthor;}
    void SetAuthor(string sAuthor) {m_sAuthor = sAuthor;}
    string GetPub() {return m_sPublisher;}
    void SetPub(string sPublisher) {m_sPublisher = sPublisher;}
    int GetPubYear() {return m_nPubYear;}
    void SetPubYear(int nPubYear) {m_nPubYear = nPubYear;}
    int GetNumPages() {return m_nNumPages;}
    void SetNumPages(int nNumPages) {m_nNumPages = nNumPages;}
};

int main()
{
    CBook Book1;
    Book1.SetAuthor("Stanislaw H. Lem");
    Book1.SetNumPages(150);
    Book1.SetPub("Ska");
    Book1.SetPubYear(2018);
    Book1.SetTitle("Stellaris");

    cout << Book1.GetAuthor() << endl;
    cout << Book1.GetTitle() << endl;
    cout << Book1.GetPub() << endl;
    cout << Book1.GetPubYear() << endl;
    cout << Book1.GetNumPages() << endl << endl;

    CBook* pBook = &Book1;
    cout << pBook->GetAuthor() << endl;

    return 0;
}
