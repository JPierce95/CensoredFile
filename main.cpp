//Author: Joshua E. Pierce
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  ifstream inFile;
  char first = ' ', last = ' ', current;
  vector <char> letters;

  inFile.open("example.txt");

  while(!(inFile.eof())){
    inFile >> current;
    letters.push_back(current);
  }

  inFile.close();


  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<letters.at(0)<<"**"<<letters.at(letters.size() - 1)<<endl;

  return 0;
}
