#include<iostream>
using namespace std;
string removeocc(string s,string part){
    while(s.length()!=0 && s.find(part)< s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;

}
int main(){
    string s,part;
    
    cout<<"Enter the main string"<<endl;
    cin>>s;
    cout<<"ENter the sub string"<<endl;
    cin>>part;
    cout<<"The word after removing the occurance of the sub string "  <<endl;
    string removed=removeocc(s,part);
    cout<< removed <<endl;
    
}
