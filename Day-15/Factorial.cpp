#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int i=1, fact=1;;
    //Using while Loop
    /*while(i<=n){
        fact=fact*i;
        i++;
    }
 cout<<"Factorial is : "<<fact<<endl;*/
    //using do while loop;

    do {
        fact=fact*i;
        i++;
    } while(i<=n);
    cout<<"Factorial is : "<<fact<<endl;

    return 0;
}