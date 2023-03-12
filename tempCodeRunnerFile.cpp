#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t>0){
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
        int arr[n];
        arr[0] = 1;
        for(int i = 1;i < n;i++){
            if(a[i-1] == '0'){
                arr[i] = arr[i-1] +1;
            }
            else{
                arr[i] = arr[i-1]-1;
            }
        }
        int count =0;
        for(int i =0;i < n;i++){
            if(i == 0){
                if(arr[i] > arr[i+1]){
                    count ++;
                    continue;
                }
            }
            else if(i == n-1){
                if(arr[i] > arr[i-1]){
                    count++;
                    continue;
                }
            }
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                count ++;
                continue;
            }
        }
        cout << count << endl;
	    t--;
	}
	return 0;
}
