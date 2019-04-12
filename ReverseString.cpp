#include<iostream>
#include<string>
#include<stack>

using namespace std;

void reverseString(string str){
    stack<char> s;

    for(int i=0; i <str.length(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    cout << endl;
}

int main(){
    string str = "Tejal Chougule";
    reverseString(str);
}
