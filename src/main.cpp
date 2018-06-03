#include<iostream>
#include"main/mode.cpp"
using namespace std;
int main(){
    cout<<"Bulls and Cows"<<endl;
    cout<<"Input the command after the dollar sign ($). m for manual."<<endl;
    int state=0;
    for(;state==0;){
        cout<<"$ ";
        string s;
        cin>>s;
        if(s=="m"){
            cout<<"    Command for the current mode:"<<endl;
            cout<<"      m: Print the manual."<<endl;
            cout<<"      q: Quit."<<endl;
            cout<<"      r: Start a new round. Running this command enters the round mode."<<endl;
        }else if(s=="q"){
            state=1;
        }else if(s=="r"){
            mode::round();
        }
    }
}
