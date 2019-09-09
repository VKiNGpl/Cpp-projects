#include <iostream>

using namespace std;

const int X_MAX_SIZE = 8;
const int Y_MAX_SIZE = 8;
char chessBoard[Y_MAX_SIZE][X_MAX_SIZE];

void PrintXEdge();
void PrintXLine();
void PrintRows();
void PrintSameDiag(int, int);
void PrintOddDiag(int, int);

int main()
{
    PrintXEdge();
    PrintRows();
    PrintXEdge();

    return 0;
}
void PrintXEdge()
{
    for (int i=0; i<X_MAX_SIZE; i++)
    {
        cout << "----";
    }
    cout << "-" << endl;
}
void PrintXLine()
{
    cout << endl;
    for (int i=0; i<X_MAX_SIZE; i++)
    {
        cout << "|---";
    }
    cout << "|" << endl;
}

void PrintRows()
{
    for (int i=0; i<Y_MAX_SIZE; i++)
    {
        cout << "| " ;

        for (int j=0; j<X_MAX_SIZE; j++)
        {
            if (i%2==0 && j%2==0 || i&2!=0 && j%2!=0)
                PrintSameDiag(i, j);
            if (i%2==0 && j%2!=0 || i&2!=0 && j%2==0)
                PrintOddDiag(i, j);
            cout << " | ";
        }
        if (i<Y_MAX_SIZE-1)
            PrintXLine();
        else
            cout << endl;
    }
}

void PrintSameDiag(int i, int j)
{
    if (i>=0 && i<3)
        chessBoard[i][j] = ' ';
    if (i>2 && i<Y_MAX_SIZE-3)
        chessBoard[i][j] = ' ';
    if (i>=Y_MAX_SIZE-3 && i<Y_MAX_SIZE-1)
        chessBoard[i][j] = ' ';

    cout << chessBoard[i][j];
}
void PrintOddDiag(int i, int j)
{
    if (i>=0 && i<3)
        chessBoard[i][j] = 'b';
    if (i>2 && i<Y_MAX_SIZE-3)
        chessBoard[i][j] = '-';
    if (i>=Y_MAX_SIZE-3 && i<Y_MAX_SIZE)
        chessBoard[i][j] = 'r';

    cout << chessBoard[i][j];
}
