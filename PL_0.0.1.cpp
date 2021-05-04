#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <string>

using namespace std;
int main () {
  fstream output;
  output.open("teste.txt", ios_base::app|ios_base::out);

  string text2; 
  string text;

  //cout << "numero por favor: ";
  //cin >> num;
  cout << "texto tambem: ";
  getline (cin, text);
  cout << "ex: " <<text << endl;
  output << "\n" <</*num << " " <<*/ text;
  output.close();
  output.open("teste.txt");
  /*output >> num2;
  cout << num2;*/
  do{
    getline(output, text2);
    cout << text2 << endl;
  }while(!output.eof());     
  
  output.close();
  return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}*/