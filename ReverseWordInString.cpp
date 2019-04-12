#include<iostream>
#include<string>
#include<stack>

using namespace std;

void reverseWordsStr(string str){
    stack<char> s;
    int i=0;
    int n = str.length();
    while(i<n){
        if(str[i]!=' '){
            s.push(str[i]);
        }
        else{
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
            cout << ' ';
        }

    i++;
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    cout<<endl;
}

int main(){
    string str = "Tejal Chougule";

    reverseWordsStr(str);
    return 0;
}
