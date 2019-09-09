/*
File: gymjudge2.cpp
------------------
This program averages a set of gymnastic scores. It discards MIN and MAX scores.
*/

#include <iostream>

const int MAX_JUDGES = 100;
const double MIN_SCORE = 0.0;
const double MAX_SCORE = 10.0;

void ReadAllScores(double scores[], int nJudges, double& total, double& minScore, double& maxScore);
double GetScore(int judge, double&, double&);
void DiscMinMax(double, double&, double&);
//double Mean(double array[], int n);

using namespace std;

int main()
{
    int nJudges;
    double scores[MAX_JUDGES];
    double totalScore = 0;
    double dMinScore=10, dMaxScore=0;
    cout << "Enter number of judges: ";
    cin >> nJudges;
    cout << endl;
    if (nJudges > MAX_JUDGES)
    {
        cerr << "Too many judges." << endl;
        return 0;
    }
    ReadAllScores(scores, nJudges, totalScore, dMinScore, dMaxScore);
    cout << endl;
    cout << "The average score is " << (totalScore-dMinScore-dMaxScore)/(nJudges-2) << endl << endl;
    cout << "Discarded min score: " << dMinScore << endl << "Discarded max score: " << dMaxScore << endl;
    return 0;
}
/*
Function: ReadAllScores
Usage: ReadAllScores(scores, nJudges);
--------------------------------------
This function reads in scores for each of the judges. The
array scores must be declared by the caller and must have
an allocated size that is at least as large as nJudges.
Because people tend to count starting at 1 rather than 0,
this program adds 1 to the argument to GetScore, which means
that the values the user sees will range from 1 to n instead
of between 0 and n-1.
*/

void ReadAllScores(double scores[], int nJudges, double& total, double& minScore, double& maxScore)
{
    for (int i=0; i<nJudges; i++)
    {
        scores[i] = GetScore(i+1, minScore, maxScore);
        total += scores[i];
    }
}
/*
Function: GetScore
Usage: score = GetScore(judge);
-------------------------------
This function reads in the score for the specified judge.
The implementation makes sure that the score is in the
legal range before returning.
*/

double GetScore(int judge, double& minScore, double& maxScore) {
    double score = 0;
    while (true) {
        cout << "Score for judge #" << judge << ": ";
        cin >> score;
        DiscMinMax(score, minScore, maxScore);
        if (score>=MIN_SCORE && score<=MAX_SCORE) return score;
        cout << "That score is out of range. Try again." << endl;
    }

}
void DiscMinMax(double score, double& minScore, double& maxScore)
{
if(score<minScore) minScore=score;
if(score>maxScore) maxScore=score;
}
/*
Function: Mean
Usage: mean = Mean(array, n);
-----------------------------
This function return the statistical mean (average) of a
distribution stored in array, which has effective size n.
*/
/*
double Mean(double array[], int n) {
    double total = 0;
    for (int i=0; i<n; i++) {
        total += array[i];
        return total/n;
    }
}
*/
