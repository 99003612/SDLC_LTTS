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
void phno(string num)
{
    int count=0;
   for(int i=0;i<num.length();i++)
   {
       
     if(isdigit(num[i]))
     {
         count+=1;
     }
   }
   if(count==10)
   {
        if(num[0]==6|| num[0]==7||num[0]==8||num[0]==9)
        {
            cout<<num;
        }
   }
   else
   {
   cout<< "INVALID NUMBER. PLEASE TRY AGAIN";
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
    string pan,gnd,fn,n,an,bs;
    string l;
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount, cs;
    cout<<"Gender"<<endl;
    cin>>gnd;
    if(gnd=="male"||gnd=="female"||gnd=="MALE"||gnd=="FEMALE")
    {
       
    }
    else
    {
    cout<<"INVALID";
    exit(0);
    }
    cout<<"Full name"<<endl;
    cin>>fn;
    cout<<"Enter 10 digit mobile number"<<endl;
cin>>n;
phno(n);
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
        cout<<"proceed"<<endl;
        
    }
    else
    {
        cout<<"reject";
     exit(0);   
    }
    
    cout<<"Do you have pervious 2 months bank slip"<<endl;
    cout<<"YES OR NO"<<endl;
    cin>>bs;
    
    if(bs=="yes" || bs=="YES" )
    {
        cout<<"Configuration you may proceed" <<endl;
    }
    else
    {
        cout<<"reject";
     exit(0);   
    }

    cout<<"enter your cibil score"<<endl;
   cin>>cs;
    cout<<endl;
    if((cs>=300) && (cs<=900))
    {
        cout<<"loan approved"<<endl;
    }
    else
    {
        cout<<"loan rejected"<<endl;
       
        exit(0);
    }
    
   
cout<<"Enter the loan amount: ";
cin>>loan_amount;
cout<<endl;
cout<<"Enter the interest rate: ";
cin>>interest_rate;
if(interest_rate>0)
{
    cout<<interest_rate;
}
else{
    cout<<"error";
}
cout<<endl;
cout<<"The number of years: ";
cin>>number_of_years;
cout<<endl;
   
total_amount=(number_of_years*loan_amount)+(number_of_years*loan_amount*(interest_rate/100.00));
monthly_amount=total_amount/(number_of_years*12);

cout<<"Total amount to be paid: "<<total_amount<<endl;
cout<<"Total interest: "<<total_amount-(number_of_years*loan_amount)<<endl;
cout<<"Monthly amount to be paid: "<<monthly_amount<<endl;


return 0;
}
