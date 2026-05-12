#include<iostream>
using namespace std;

float Summation(float Arr[], int iSize)
{
    int iCnt = 0;
    float iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    float Brr[] = {10.1f,20.1f,30.1f,40.1f,50.1f};
    float iRet = 0.0f;

    iRet = Summation(Brr,5);

    cout<<"Summation is :"<<iRet<<"\n";
   
    
    return 0;
}