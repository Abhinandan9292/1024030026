#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void concatenate_string(){
    string s1,s2;
    cin>>s1>>s2;
    s1=s1+s2;
    cout<<s1<<endl;
}

void reverse_string(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0,j=n-1;i<j;i++,j--){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s<<endl;
}

void delete_vowels(){
    string s;
    cin>>s;
    string result="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U'){
            result+=ch;
        }
    }
    cout<<result<<endl;
}

void sort_strings(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void uppercase_to_lowercase(){
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        ch=ch-'A'+'a';
    }
    cout<<ch<<endl;
}

int main(){
    int choice;
    cin>>choice;
    if(choice==1){
        concatenate_string();
    }
    else if(choice==2){
        reverse_string();
    }
    else if(choice==3){
        delete_vowels();
    }
    else if(choice==4){
        sort_strings();
    }
    else if(choice==5){
        uppercase_to_lowercase();
    }
    return 0;
}
