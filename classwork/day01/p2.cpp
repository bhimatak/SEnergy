/*

Arrays

dt arrayName[Cap];
int a1[10];
float a2[10];
double a3[10];
char name[5];

2000 2001 2002 2003 2004
0     1    2    3   4

2000   2004

BA + (iv * sizeof(dt))

int a1[3] = {1,2,3};

2000 
2000 + (-1 * 4) = 1996
2000 + (0 * 4) = 2000
2000 + (1 * 4) = 2004
*/
#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for(int i=0; i<5;i++)
        std::cin>>arr[i];
    
    for(int i=0;i<5;i++)
        std::cout<<arr[i]<<endl;
    return 0;

    int size = sizeof(arr)/sizeof(arr[0]);
}

/*

strings.h

strcpy, strcmp, strtok - tokenzing

strcpy(str1, str2);
copy str2 to str1

strcmp(str1, str2);
= 0 => equal
= +ve if str1 is greater than str2
= -ive if str2 is greater than str1

strtok()
*/

