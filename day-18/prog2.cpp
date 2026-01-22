//most frequent character
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str, 100);
    int freq[256] = {0}
    ;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] != ' '){
            freq[(unsigned char)str[i]]++;
        }
    }
    int maxFreq = 0;
    char mostFrequentChar;
    for(int i=0; i<256; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            mostFrequentChar = (char)i;
        }
    }
    if(maxFreq > 0){
        cout<<"most frequent character: "<<mostFrequentChar<<endl;
        cout<<"frequency: "<<maxFreq<<endl;
    }
    else{
        cout<<"no characters found"<<endl;
    }
    return 0;
}

