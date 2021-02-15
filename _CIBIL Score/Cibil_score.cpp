void cibil(int cibil_score)
{

cout << "Based on your cibil score, we give you an estimate of what your annual payments might look like. \n";
cout << "Enter your CIBIL Score-\n";
cin >> cibil_score;

if ((cibil_score >= 300) && (cibil_score <550)) {
cout << "Poor Score, Loan rejected.";
}
else if ((cibil_score >= 550) && (cibil_score <700)) {
cout << "Low CIBIL Score, Loan rejected.";
}
else if ((cibil_score >= 700) && (cibil_score <750)) {
cout << "Average CIBIL Score, Eligible for loan.";
}
else if ((cibil_score >= 750) && (cibil_score <900)) {
cout << "Good CIBIL Score, Eligible for loan.";
}

}
