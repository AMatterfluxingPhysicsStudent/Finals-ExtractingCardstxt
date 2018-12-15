#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int num[3];
  ifstream FileRead;
  FileRead.open("cards.txt", ios::in);
  if(FileRead.fail() == 0){
    for(int i = 0; i<3; i++){
      FileRead>>num[i];
    }
    FileRead.close();
  }

  for(int o = 0; o < 3; o++){
    cout<<num[o]<<endl;
  }


}