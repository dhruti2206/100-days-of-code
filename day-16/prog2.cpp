//count vowels & consonants in a string
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    cin>>str;
    int vowels=0, consonants=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            ch=tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    cout<<"number of vowels: "<<vowels<<endl;
    cout<<"number of consonants: "<<consonants<<endl;
    return 0;
}
