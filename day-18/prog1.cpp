//find duplicate characters
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str, 100);
    int len = strlen(str);
    bool foundDuplicate = false;
    cout<<"duplicate characters: ";
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(str[i] == str[j] && str[i] != ' '){
                cout<<str[i]<<" ";
                foundDuplicate = true;
                break; // to avoid printing the same character multiple times
            }
        }
    }
    if(!foundDuplicate){
        cout<<"none";
    }
    cout<<endl;
    return 0;
}
