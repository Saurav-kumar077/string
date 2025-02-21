#include<iostream>
using namespace std;
bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
    
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);

    }
}
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
    }
    return count;

}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<< name << endl;
    cout<<"The length of the string is"<<endl;
    int len=getlength(name);
    cout<<len<<endl;
    reverse(name,len);
    cout<<"The reverse string is"<<name<<endl;
    cout<<"Pelindrome or not"<<checkpalindrome(name,len)<<endl;

    return 0;

}