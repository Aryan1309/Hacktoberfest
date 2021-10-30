/*GIVEN A STRING , PRINT ALL THE PERMUTATIONS POSSIBLE WITH THOSE CHARACTERS*/

#include<bits/stdc++.h>
using namespace std;

void permutation(string str,string sfs){

    if(str.size() == 0){
        cout<<sfs<<endl;
        return;
    }

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);  //New string has to be made which is basically ros(rest of string)
        permutation(ros,sfs+ch);
    }

}
