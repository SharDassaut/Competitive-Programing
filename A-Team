#include <iostream>
#include <string>
using namespace std;

int main(){

int iteration(0);
int resolvedProblems(0);
string s("");

cin >> iteration;
cin.ignore();

while (iteration > 0)
{

    getline(cin, s);
    int count(0);
    for(int it = 0; it < s.length(); it++){
        if(s[it] == '1'){
            count++;
        }
    }

    if(count >= 2){
        resolvedProblems++;
    }

    iteration--;
}
cout << resolvedProblems;

return 0;
}
