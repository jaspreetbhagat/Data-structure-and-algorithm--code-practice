#include<iostream>
using namespace std;
int main()
{
    char a[]="how are you";
    int i;
    int vowelcounter=0;
    int consonentscounter=0;
    int words=1;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' '||a[i-1]!=' '){
            words++;
        }
        if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='A'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='E'){
            vowelcounter++;
        }
        else if((a[i]>=65 &&a[i]<=90)||(a[i]>97&&a[i]<=122)){
            consonentscounter++;
        }
    }
    cout<<words<<endl;
    cout<<vowelcounter<<endl;
    cout<<consonentscounter;
    
    return 0;
}