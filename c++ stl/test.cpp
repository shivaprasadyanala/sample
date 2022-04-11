 #include <bits/stdc++.h>
 using namespace std;
 void solve(){
    int n;cin>>n;
    float arr[n];
    float prev = 0;
    float forward[n] = {0};
    float backward[n] = {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        prev += arr[i];
        forward[i] = prev;
    }
    prev = 0;
    float x = 0;
    for(int i=n-1;i>=0;i--){
        backward[i] = prev + arr[i];
        prev = backward[i];
    }
    float maxi = 0;
    float left_mean = 0;
    float right_mean = 0;
    for(int i=1;i<n;i++){

        float temp = float(n-i);

        left_mean = forward[i-1]/float(i);
        right_mean = backward[i]/float(temp);

        if(maxi<=(left_mean+right_mean)) maxi = (left_mean+right_mean);
    }
    cout<<fixed<<setprecision(10)<<maxi<<endl;
    return;
}
void solve2(){
	int arr2d[10][10]={{13, 14, 15, 16},{1, 4, 3, 2},{7, 5, 7, 6},{9, 10, 11, 12}};
	int n = 4;
	std::vector<int> v(arr2d, arr2d + n); // create a vector based on pointers
                                      // This assumes array is contiguous range 
                                      // in memory, N=number of elemnts in arr2d
// using default comparison (operator <):





std::sort (v.begin(), v.end());

// cout by 4 elements in a row
}
 main()
 {
 	solve();
 	solve2();
 }
 
