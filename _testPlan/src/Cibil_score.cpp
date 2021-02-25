#include<iostream>
using namespace std;

void cibil(int cibil_score)
{

cout << "Based on your cibil score, we give you an estimate of what your annual payments might look like. \n";
cout << "Enter your CIBIL Score-\n";
cin >> cibil_score;

if ((cibil_score >=100) && (cibil_score <300)) {
cout << "Poor CIBIL Score, Loan rejected.";
}
else if ((cibil_score >= 300) && (cibil_score <900)) {
cout << "Good CIBIL Score, Loan accepted.";
}
}
