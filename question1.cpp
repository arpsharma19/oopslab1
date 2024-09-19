/*Construct a C++ program that removes a specific character from a given string and
return the updated string.
 Typical Input: computer science is the future
 Typical Output: compuer science is he fuure*/

#include <iostream>
#include <string>
using namespace std;
string remove(string input,char chartoremove){
    string result="";
    for(int i=0;i<input.length();i++){
        if(input[i]!=chartoremove){
            result=result+input[i];
        }
    }
    return result;
}
int main(){
    string input;
    char chartoremove;
    cout<<"enter the string:";
    getline(cin,input);
    
    cout<<"enter the character to remove:";
    cin>>chartoremove;
    string updatedstring=remove(input,chartoremove);
    
    cout<<"updated string is:"<<updatedstring<<endl;
    return 0;
}