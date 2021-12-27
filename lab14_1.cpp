#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double data[],int N,double result[])
{
    double sum1 = 0, sum2 = 0, sum3 = 1, sum4 = 0, max = data[0], min = data[0];
    for(int i = 0; i < N; i++)
    {
        sum1 += data[i];
        sum2 += pow(data[i],2);
        sum3 *= data[i];
        sum4 += 1/data[i];
        if(data[i] > max) max = data[i];
        if(data[i] < min) min = data[i];
    }
    result[0] = sum1/N;
    result[1] = sqrt((sum2/N)-pow(result[0],2));
    result[2] = pow(sum3,1.0/N);
    result[3] = N/(sum4);
    result[4] = max;
    result[5] = min;
}
