#ifndef mainModeModule
#define mainModeModule
#include<algorithm>
#include<iostream>
#include<vector>
#include"math.cpp"
using namespace std;
namespace mode{namespace round{
    void list_vector(
        int elementCount,
        int length,
        vector<char>&v,
        vector<vector<char>>&out
    ){
        if(v.size()==length){
            out.push_back(v);
            return;
        }
        for(char i=0;i<elementCount;i++){
            if(find(v.begin(),v.end(),i)!=v.end())
                continue;
            v.push_back(i);
            list_vector(elementCount,length,v,out);
            v.pop_back();
        }
    }
    void list(int elementCount,int length){
        vector<char>v;
        vector<vector<char>>res;
        list_vector(elementCount,length,v,res);
        for(int i=0;i<res.size();i++){
            for(int j=0;j<length;j++)
                cout<<(int)res[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    void main(){
        cout<<"Round mode is entered."<<endl;
        int elementCount=10,length=4;
        int state=0;
        for(;state==0;){
            cout<<"r$ ";
            string s;
            cin>>s;
            if(s=="l"){
                list(elementCount,length);
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
}}
#endif
