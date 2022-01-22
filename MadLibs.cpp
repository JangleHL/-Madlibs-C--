#include <iostream>
using namespace std;
int main()
{
    string noun1, noun2, nouns1 , nouns2 , place , adjective , verb1 , verb2 , number , bodypart;
  
    cout<<"Give me nouns1: ";
    getline(cin,nouns1);
    cout<<"Give me a place: ";
    getline(cin,place);
    cout<<"Give me a noun1: ";
    getline(cin,noun1);
    cout<<"Give me nouns2: ";
    getline(cin,nouns2);
    cout<<"Give me a noun2: ";
    getline(cin,noun2);
    cout<<"Give me an adjective: ";
    getline(cin,adjective);
    cout<<"Give me a verb1: ";
    getline(cin,verb1);
    cout<<"Give me a number: ";
    getline(cin,number);
    cout<<"Give me a bodypart: ";
    getline(cin,bodypart);
    cout<<"Give me a verb2: ";
    getline(cin,verb2);
  
    cout<<"\nTwo " <<nouns1<<"," " both alike in dignity"",";
    cout<<"\nIn fair " <<place<<","" where we lay our scene "",";
    cout<<"\nFrom ancient " <<noun1<< " break to new mutiny "",";
    cout<<"\nWhere civil blood makes civil hands unclean"".";
    cout<<"\nFrom forth the fatal loins of these two foes";  
    cout<<"\nA pair of star-cross'd " <<nouns2<< " take their life "";";
    cout<<"\nWhole misadventured piteous overthrows";
    cout<<"\nDo with thier " <<noun2<< " bury their parents' strife"".";
    cout<<"\nThe fearful passage of their " <<adjective<< " love"",";
    cout<<"\nAnd the continuance of their parents' rage"",";
    cout<<"\nWhich"", ""but their children's end"","" nought could " <<verb1<<",";
    cout<<"\nIs now the " <<number<< " hours's traffic of our stage";
    cout<<"\nThe which if you with " <<bodypart<< " attend"",";
    cout<<"\nWhat here shall " <<verb2<<"," " our toil shall strive to mend"".";

    return 0;
}