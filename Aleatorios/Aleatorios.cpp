#include <stdlib.h>
#include<iostream>
using namespace std;
 
int main()
{
    int num, i;
    
    for(i = 1; i <= 10; i++)
    {
        num = 1 + rand() % (20 - 1);
        cout << num<< " ";
    }
    
    return 0;
}