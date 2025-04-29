/ 2 libaries are being used for showig the file input and output 
//ifstram - reading and writing files 
//ofstream - showing the output in the display

#include <iostream>
#include<fstream>
using namespace std;

int main(){
    //Write to a file 
    ofstream fout("data.txt");
    if(fout.is_open()){
        fout<<"Hello from the file inside "<<endl;
    }
    fout.close();
    return 0;
}