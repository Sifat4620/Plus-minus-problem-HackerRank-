#include<bits/stdc++.h>
using namespace std;


void positiveNegativeZero(int arr[], int len)
{
    float positiveCount = 0;
    float negativeCount = 0;
    float zeroCount = 0;


    for (int i = 0; i < len; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else if (arr[i] == 0) {
            zeroCount++;
        }
    }


    cout << fixed << setprecision(4) << (positiveCount / len)<<" "<<endl;
    cout << fixed << setprecision(4) << (negativeCount / len)<<" " <<endl;
    cout << fixed << setprecision(4) << (zeroCount / len)<<endl;
    cout << endl;
}

// Driver Code.
int main()
{
    // Test Case 1:
    int a1[] = { 2, -1, 5, 6, 0, -3 };
    int len=sizeof(a1)/sizeof(a1[0]);
    positiveNegativeZero(a1,len);


}
