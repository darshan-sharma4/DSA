#include<iostream>
#include<string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){
    for(int i =0; i<26; i++){
        if(freq1[i] != freq2[i]){
           return false;
        }
    }
    return true;
}

bool permutation(string s1, string s2){
    
    int freq1[26]={0};

    for(int i=0; i<s1.length(); i++){
       freq1[s1[i]-'a']++;
    }
    
    
    int windSize = s1.length();
    for(int i =0 ; i<s2.length(); i++ ){
      int windIdx =0 , idx =i;
      int windFreq[26]={0};

      while (windIdx< windSize && idx< s2.length()){
        windFreq[s2[idx]-'a']++;
        windIdx++; idx++;
      }

      if(isFreqSame(freq1,windFreq)){
        return true;
      }
      
    }
    return false;

}

int main(){
    string s1="abc";
    string s2 = "eidbaooo";
    bool res= permutation(s1,s2);
    cout<<res<<" ";
}