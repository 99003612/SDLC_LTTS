#include <iostream>
#include <regex>
using namespace std;
 

bool isValidPanCardNo(string panCardNo)
{
     const regex pattern("[A-Z]{5}[0-9]{4}[A-Z]{1}");
 
  if (panCardNo.empty()) {
        return false;
    }
 
    if (regex_match(panCardNo, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void cibil(int cibil_score)
{

cout << "Based on your cibil score, we give you an estimate of what your annual payments might look like. \n";
cout << "Enter your CIBIL Score-\n";
cin >> cibil_score;

if ((cibil_score >=100) && (cibil_score <300)) {
<<<<<<< HEAD
cout << "Poor CIBIL Score, Loan rejected."<<endl;
exit(0);
}
else if ((cibil_score >= 300) && (cibil_score <900)) {
cout << "Good CIBIL Score, Loan accepted."<<endl;
=======
cout << "Poor CIBIL Score, Loan rejected.";
}
else if ((cibil_score >= 300) && (cibil_score <900)) {
cout << "Good CIBIL Score, Loan accepted.";
>>>>>>> 6ca9d5112d47806288770d475d19739fb52457a1
}
}


void phno(string num){
    int count=0;
    //if(num[0]<='9')
   for(int i=0;i<num.length();i++)
   {
       
     if(isdigit(num[i]))
     {
         count+=1;
     }
   }
   if(count==10)
   {
        if(num[0]=='6'|| num[0]=='7'||num[0]=='8'||num[0]=='9')
        {
            cout<<"The number entered is "<<num<<endl;
        }
        else
        {
            cout<<"The first digit is not correct. ";
            cin>>num;
            phno(num);
        }
   }
   else
   {
   cout<< "The digit is not equal to 10";
   cin>>num;
   phno(num);
   }
}
void aadhaar(string num)
{
    int count=0;
   for(int i=0;i<num.length();i++)
   {
     if(isdigit(num[i]))
     {
         count+=1;
     }
   }
   if(count==12)
   {
       
   }
   else
   {
   cout<< "Enter Valid Aadhar no";
   cin>>num;
   aadhaar(num);
   }
}


int main(){
    string pan,gnd,fn,n,an,bs,fno,bno,sal;
    int m=0;
    string l;
    int c;
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount, cs;
    cout<<"Enter your Gender"<<endl;
    cin>>gnd;
    if(gnd=="male"||gnd=="female"||gnd=="MALE"||gnd=="FEMALE")
    {
       
    }
    else
    {
        cout<<"Invalid Gender entered. "<<endl;
        cout<<"Enter your Gender"<<endl;
        cin>>gnd;
    }
    cout<<"Full name"<<endl;
    cin>>fn;
    cout<<"Enter 10 digit mobile number"<<endl;
    cin>>n;
    phno(n);
    cout<<" ------------- ENTER YOUR PERSONAL DETAILS--------------- "<<endl;
    cout<<"Enter pan"<<endl;
    cin>>pan;
    bool res=isValidPanCardNo(pan);
    if(res==true)
    {
   
    }
    else
    {
        cout<<"Enter valid pan"<<endl;
        cin>>pan;
        isValidPanCardNo(pan);
    }
    cout<<"Enter Aadhaar Number"<<endl;
    cin>>an;
    aadhaar(an);
    cout<<"Eligibility:"<<endl;
    cout<<"Are you Eligibile with all paramenters of form 16"<<endl;
    cout<<"YES OR NO"<<endl;
    cin>>l;
   
    if(l=="yes" || l=="YES")
    {
        cout<<"Enter the form 16 number"<<endl;
        cin>>fno;
        m = m + 100;
        cout<<m<<endl;
       
    }
    else
    {
        cout<<"reject";
     exit(0);  
    }
   
    cout<<"Do you have previous 2 months bank slip"<<endl;
    cout<<"YES OR NO"<<endl;
    cin>>bs;
   
    if(bs=="yes" || bs=="YES" )
    {
        cout<<"Enter bank slip number"<<endl;
        cin>>bno;
        m+=100;
        cout<<"Your credit score is : "<<m<<endl; 
    }
    else
    {
        cout<<"reject";
     exit(0);  
    }
    cout<<"Enter your Salary in a month: "<<endl;
    cin>>sal;
    if(sal<="3000")
    {
        
        cout<<"NOT APPLICABLE FOR LOAN"<<endl;
    }
    else if(sal>="3000" && sal<="10000")
    {
        m = m + 100;
    }
    cout<<"Credit Score is : "<< m <<endl;
   
    cibil(m);
   
    cout<<"Enter the loan amount: ";
    cin>>loan_amount;
    cout<<"The loan amount entered is : "<<loan_amount << endl;
    cout<<"Enter the interest rate: ";
    cin>>interest_rate;
    if(interest_rate>0)
    {
        cout<<"The interest rate is: " << interest_rate;
    }
    else{
        cout<<"Error";
    }
    cout<<endl;
    cout<<"The number of years: ";
    cin>>number_of_years;
    cout<<"The number of years is : "<<number_of_years<<endl;
   
    total_amount=(number_of_years*loan_amount)+(number_of_years*loan_amount*(interest_rate/100.00));
    monthly_amount=total_amount/(number_of_years*12);

    cout<<"Total amount to be paid: "<<total_amount<<endl;
    cout<<"Total interest: "<<total_amount-(number_of_years*loan_amount)<<endl;
    cout<<"Monthly amount to be paid: "<<monthly_amount<<endl;


    return 0;
}