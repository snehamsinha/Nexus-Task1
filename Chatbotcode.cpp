#include <iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() 
{
  unordered_map<string,string>memory;
  string user_input;


// turning user_input into lowercase
transform(user_input.begin(),user_input.end(),user_input.begin(),::tolower);
//getting user's name
string name;
cout<<"\n What is your name?";
getline(cin,name);
cout<<"Hello"<<name;
//Welcome messgae for user
cout<<"\n Welcome, I am a chatbot!"<<endl;
//chatbot functionality 
while(true)
{
    //getting user input 
    getline(cin,user_input);
    // turning user_input into lowercase
transform(user_input.begin(),user_input.end(),user_input.begin(),::tolower);
//conversation between chatbot and user 
   if(user_input=="hi"||user_input=="hello"||user_input=="hey")
   {
    cout<<"Hello,how can I help you?"<<endl;
   }
   else if(user_input=="how are you"||user_input=="are you ok")
   {
    cout<<"As a chatbot, I am away from human misery and I am always happy!"<<endl;
   }
   else if(user_input=="What is your name"||user_input=="name")
   {
    cout<<"I am botbuddy.Now that I configure, I really like my name"<<endl;
   }
   else if(user_input=="where are you from"||user_input=="which place do you belong")
   {
    cout<<"Ah!The fascinating world of binary landscape"<<endl;
   }
   else if(user_input=="what is your favourite")
   {
    cout<<"I like all colours"<<endl;
   }
   else if(user_input=="what can you do"||user_input=="Tasks you can perform")
   {
    cout<<"I can do basic mathematical arithemetic problems between two numbers"<<endl;
   }
   else if(user_input=="addition"||user_input=="add two numbers"||user_input=="add")
   {float a,b,c;
    cout<<"Enter the first number \n";
    cin>>a;
    cout<<"Enter the second number \n";
    cin>>b;
    c=a+b;
    cout<<"The sum of the numbers is="<<c;
   }
   else if(user_input=="subtraction"||user_input=="subtract two numbers"||user_input=="subtract")
   {float x,y,z;
    cout<<"Enter the first number \n";
    cin>>x;
    cout<<"Enter the second number \n";
    cin>>y;
    z=x-y;
    cout<<"The subtracted result of the numbers is="<<z;
   }
   else if(user_input=="multiplication"||user_input=="multiply two numbers"||user_input=="multiply")
   {int p,q,r;
    cout<<"Enter the first number \n";
    cin>>p;
    cout<<"Enter the second number \n";
    cin>>q;
    r=p*q;
    cout<<"The product of the numbers is="<<r;
   }
   else if(user_input=="subtraction"||user_input=="subtract two numbers"||user_input=="subtract")
   {int c;
    double d;
    double sum2;
    cout<<"Enter the first number \n";
    cin>>c;
    cout<<"Enter the second number \n";
    cin>>d;
   sum2 = c/d;
    cout<<"The subtracted result of the number is="<<c;
   }
   else if(user_input=="bye"||user_input=="see you later")
   {
    cout<<"Bye!"<<endl;
    break;
   }
   //default message
   else
   {
    cout<<"I am sorry, I didn't get you";
   }
}
return 0;
}


