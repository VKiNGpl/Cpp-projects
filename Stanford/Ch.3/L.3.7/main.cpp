#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void CopyRemovingComments(ifstream& infile, ofstream& outfile);

int main()
{
    CopyRemovingComments();

    return 0;
}

void CopyRemovingComments(ifstream& infile, ofstream& outfile)
{
    int ch, nch;
    bool commentFlag;

    commentFlag = false;
    while ((ch = infile.get()) != EOF)
    {
        if (commentFlag)
        {
            if (ch == '*')
            {
                nch = infile.get();
                if (nch == '/')
                {
                    commentFlag = false;
                }
                else
                {
                    infile.unget();
                }
            }
        }
        else
        {
            if (ch == '/')
            {
                nch = infile.get();
                if (nch == '*')
                {
                    commentFlag = true;
                }
                else
                {
                    infile.unget();
                }
            }
            if (!commentFlag)
            {
                outfile.put(ch);
            }
        }
    }
}
