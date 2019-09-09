#include <iostream>

using namespace std;

const int X_MAX_SIZE = 8;
const int Y_MAX_SIZE = 8;
char chessBoard[Y_MAX_SIZE][X_MAX_SIZE] {'r','n','b','q','k','b','n','r'};

void PrintXEdge();
void PrintXLine();
void PrintFirstLine();
void PrintSecondLine();
void PringMidLines();
void MirrorArray();
void PrintMirrorLine(int, int x=0);

int main()
{
    PrintXEdge();
    PrintFirstLine();
    PrintXLine();
    PrintSecondLine();
    PrintXLine();
    PringMidLines();
    MirrorArray();
    PrintMirrorLine(Y_MAX_SIZE-4);
    PrintXLine();
    PrintMirrorLine(Y_MAX_SIZE-3);
    PrintXLine();
    PrintMirrorLine(Y_MAX_SIZE-2, 32);
    PrintXLine();
    PrintMirrorLine(Y_MAX_SIZE-1, 32);
    cout << "|" << endl;
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
    cout << "|" << endl;
    for (int i=0; i<X_MAX_SIZE; i++)
    {
        cout << "|---";
    }
    cout << "|" << endl;
}
void PrintFirstLine()
{
    for (int i=0; i<X_MAX_SIZE; i++)
    {
        cout << "| " << chessBoard[0][i] << " ";
    }
}
void PrintSecondLine()
{
    for (int i=0; i<X_MAX_SIZE; i++)
    {
        chessBoard[1][i] = 'p';
        cout << "| " << chessBoard[1][i] << " ";
    }
}
void PringMidLines()
{
    for (int i=2; i<4; i++)
    {
        for (int j=0; j<X_MAX_SIZE; j++)
        {
            chessBoard[i][j] = '-';
            cout << "| " << chessBoard[i][j] << " ";
        }
        PrintXLine();
    }
}
void MirrorArray()
{
    for (int i=0; i<Y_MAX_SIZE/2; i++)           // Mirror copy top to bottom
    {
        for (int j=0; j<X_MAX_SIZE; j++)
        {
            chessBoard[Y_MAX_SIZE-i-1][j] = chessBoard[i][j];
        }
    }
}
void PrintMirrorLine(int n, int x)
{
        for (int j=0; j<X_MAX_SIZE; j++)
        {
            cout << "| " << char(chessBoard[n][j]-x) << " ";
        }
}
