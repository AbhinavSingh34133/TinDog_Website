#include<iostream>
using namespace std;
int main(){
    double s[12]={0};
    double sum = 0;
    srand(time(nullptr));
    for (int i = 0; i < 1000000; i++){
        int a = rand()%6 +1;
        int b = rand()%6 +1;
        s[a+b-1]++;
    }
    for(int i =0 ;i < 12;i++){
        cout << abs(s[i])<< " ";
    }
    
}