#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        ifstream inFile;
        char first = ' ', last = ' ', current;

        inFile.open("example.txt");

        do{
                inFile >> first;
        }
        while(!(first > 65 && first < 91)&&(first > 97 && first < 123));

        while(!(inFile.eof())){
        inFile >> current;
                if(!(current > 65 && current < 91)&&(current > 97 && current < 123)){
                        last = current;
                }
        }

        inFile.close();


        //Read from the file opened by in, and the first letter (either upper or
        //lower case) should be assigned to first and the last letter (again in
        //either case) from the file to the variable last

        //Then, finally, this displays the censored version:
        cout<<first<<"**"<<last<<endl;

        return 0;
}
