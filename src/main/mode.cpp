#ifndef mainModeModule
#define mainModeModule
#include<algorithm>
#include<iostream>
#include<vector>
#include"math.cpp"
using namespace std;
namespace mode{
    namespace roundSpace{
        void list_vector(int elementCount,int length,vector<int>&v){
            if(v.size()==length){
                for(int i=0;i<v.size();i++)
                    cout<<v[i];
                cout<<" ";
                return;
            }
            for(int i=0;i<elementCount;i++){
                if(find(v.begin(),v.end(),i)!=v.end())
                    continue;
                v.push_back(i);
                list_vector(elementCount,length,v);
                v.pop_back();
            }
        }
        void list(int elementCount,int length){
            vector<int>v;
            list_vector(elementCount,length,v);
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
    }
    void round(){
        roundSpace::main();
    }
}
#endif
