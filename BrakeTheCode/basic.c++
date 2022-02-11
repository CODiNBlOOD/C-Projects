#include <iostream>
#include<ctime>
using namespace std;

void IntroductionOFprint(int Diffculty)
{
  
  cout << "\n👉👉👉 today we are going to play serious ,Where YOu aRe agnet and YOu have To Crack The CodE  👈👈👈👈"<<endl;
  cout<<">>>>>>>>  👽👽👽👽 Your Diffculty Level is  👽👽👽👽 <<<<<<<<"<<Diffculty<<endl;
}

bool SecureGame(int Diffculty)
{
  IntroductionOFprint(Diffculty);

  int codeA = rand()%Diffculty+Diffculty;
  int codeB = rand()%Diffculty+Diffculty;
  int codeC = rand()%Diffculty+Diffculty;
  
  const int code_sum = codeA+codeB+codeC;
  const int code_product = codeA*codeB*codeC;

// Code Print & tells rules to the user of how to Crack the Security 

  cout<< "       You have to guess the number             "<<endl;
  cout<<"             ***** Rules ****                    "<<endl;
  cout<<"\n    1 - the number is in three digit         "<<endl;
  cout<<"    2- if we add ,so it comes =   "<<code_sum<<endl; 
  cout<<"    3- if we multiply , so it comes = "<<code_product<<endl; 
  cout<<"\n  **** now crack the Code ******\n"<<endl;
  

// User can enter the Guess Code
int GuessA,GuessB,GuessC;

cout<<"enter the number"<<endl;
cin>>GuessA>>GuessB>>GuessC;

int Guess_Sum = GuessA+GuessB+GuessC;
int Guess_Product = GuessA*GuessB*GuessC;

//Print Guess Number
//cout<<Guess_Sum<<endl<<Guess_Product;

if(Guess_Sum==code_sum && Guess_Product==code_product){
cout<<"✔✔✔✔✔✔✔✔✔✔😀😀😀 You Win now keep GOing And Done Your Work 😀😀😀✔✔✔✔✔✔✔✔✔✔"<<endl;
// Diffculty++;

return true;}

else{
cout<<"😥😥😥 😥 ✘✘✘✘✘✘✘✘✘✘✘ Oops TRY AGAIN Agent , Hurry Up ✘✘✘✘✘✘✘✘✘✘✘✘😥😥😥😥😥 "<<endl;

return false;
}}

int main() 
{
  srand(time(NULL));
  int Levelhard = 1;
  const int MaxLevel = 5;

  while(Levelhard<=MaxLevel){
    
   bool GotoLevelB = SecureGame(Levelhard); //bool is used for true and flase and we also declare it in SecureGame Function in If Else stATEMENT
   cin.clear(); // clear error - if we enter char so while loop get start again and again non stop for that we use this fun()
   cin.ignore(); // Discard Buffers
  
   if(GotoLevelB)
   {
     Levelhard++; // use for increase the no. of level in output show and pass call to int diffculty->then call IntroductionofPrint(int ) 
      
   }
   
 }
 cout<<"★★★★★★★★★★---- Wowh Great You Crack All Codes Now GO away ---★★★★★★★★★★"<<endl;
 return 0;
}