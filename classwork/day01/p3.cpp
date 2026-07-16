#include <iostream>
#include <strings.h>

using namespace std;

int main()
{
    char str1[20], str2[20], str3[20]= {'B','h','\0'}, str4[20]="Bhima";

    cout<<"Input the string: ";
    //cin>>str1;

    //copy str1 to str2
    strcpy(str1, "Hello");
    strcpy(str2, str1);
    
    cout<<"str2="<<str2<<endl;

    strcat(str2, " World");

    cout<<"str2="<<str2<<endl;

    strcpy(str1,"abc");
    strcpy(str2,"abd");

    int retValue = strcmp(str1,str2);
    cout<<retValue<<endl;

    char line[]="Hi I am a C Programmer I Love C Coding I am Passionate towards C Coding";
    char words[100][20];
    int count=0;
    char *tmp = strtok(line," ");
    cout<<tmp<<endl;
    strcpy(words[count], tmp);
    while(tmp = strtok(NULL, " ")){
        //cout<<tmp<<endl;
        strcpy(words[++count], tmp);
    }

    
    for(int i=0;i<count;i++)
        cout<<words[i]<<endl;

}