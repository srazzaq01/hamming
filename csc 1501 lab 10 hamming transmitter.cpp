
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main(){
    //variable dec.
    int num = 0;
    int rem = 0;
    int binaryNum[num];
    int i = 0;
    //number to be converted
   cout << "Enter the number you wish to convert to hamming code: ";
    cin >> num;
    //convert to binary
   while (num > 0){
       for(i=0; num>0; i++){
           rem = num % 2;
           binaryNum[i] = rem;
           num = num / 2;
       }
    }
    cout << "The number in binary is: ";
    for(i=i-1 ;i>=0 ;i--){
       cout<<binaryNum[i];
       }
    cout << endl;
    //hamming check bits
    int hammingNum[3];
    hammingNum[0] = (binaryNum[3] + binaryNum[2] + binaryNum[0]) % 2;
    hammingNum[1] = (binaryNum[3] + binaryNum[1] + binaryNum[0]) % 2;
    hammingNum[2] = (binaryNum[2] + binaryNum[1] + binaryNum[0]) % 2;
    //outputting entire message
    cout << "The hamming message is: ";
    cout << hammingNum[0] << hammingNum[1] << binaryNum[3] << hammingNum[2] << binaryNum[2] << binaryNum[1] << binaryNum[0];
    cout << endl;
}
















