
#include<iostream>
using namespace std;

int main() {
  char ch;
  cout<<"Input a character"<<endl;
  cin>>ch;

  if(ch>='A' && ch<='Z')
  cout<<"It is Upper Case !"<< int(ch) <<endl;

  else if(ch>='a' && ch<='z')
  cout<<"It is Lower Case !"<<endl;

  else if(ch>=0 && ch<=9)
  cout<<"It is Digit !"<<endl;

  else
  cout<<"Special Character !"<<endl;

  
}