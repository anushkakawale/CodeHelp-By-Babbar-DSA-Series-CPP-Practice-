#include<iostream>
using namespace std;
// string replaceString(string str){
//     string temp = "";
//     for(int i=0; i<str.length(); i++){
//         if(str[i]==' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }else{
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

//added in original string
void replaceString(string &str){
    string temp = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    str=temp;
}
int main(){
    string s = "My name is  Anushka . ";
    cout<<"Original String is : "<<s<<endl;
    replaceString(s);
    cout<<"Replaced string is : "<<s;
    return 0;
}
