#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream inFile{"file.txt"};
    string lyrics{};

    if(!inFile){
        cerr<<"There was ana errreading the file."<<endl;
        return 1;
    }

    while(getline(inFile, lyrics)){
        cout<<lyrics<<endl;
    }
    inFile.close();
    
}