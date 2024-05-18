#include <iostream>
#include <string>
using namespace std;
 
int main(){
 
int iteration(0);
string length("");
string cin_text("");
string modified_text("");
 
cin >> iteration;
 
while (iteration > 0)
{
    cin >> cin_text;
 
    if(cin_text.length() > 10){
        length = to_string(cin_text.size()-2);
        modified_text += cin_text[0]+ length + cin_text[cin_text.length()-1]+"\n";
    }
    else{
        modified_text += cin_text+"\n";
    }
 
    iteration--;
}
cout << modified_text;
 
return 0;
}
