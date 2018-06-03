#include<iostream>
using namespace std;
namespace mode{
    void round(){
        cout<<"Round mode is entered."<<endl;
        int elementCount=10,length=4;
        int state=0;
        for(;state==0;){
            cout<<"r$ ";
            string s;
            cin>>s;
            if(s=="l"){
                
            }else if(s=="m"){
                cout<<"    Command for the current mode:"<<endl;
                cout<<"      l: List all permutations that pass the filters."<<endl;
                cout<<"      m: Print the manual."<<endl;
                cout<<"      p: Print about this round."<<endl;
                cout<<"      q: Quit."<<endl;
            }else if(s=="p"){
                cout<<"    Element count: "<<elementCount<<endl;
                cout<<"    Length: "<<length<<endl;
                cout<<"    Permutation count: "<<math::p(elementCount,length)<<endl;
            }else if(s=="q"){
                state=1;
            }
        }
        cout<<"Round mode is left."<<endl;
    }
}
