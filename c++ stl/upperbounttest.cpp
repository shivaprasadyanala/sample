 #include <iostream>
 using namespace std;
 int longsubseq(int n,int a[])
 {
 	int dp[n+1];
 	for(int i = 1;i<n;i++) dp[i] = INT_MAX;
 	dp[0] = 0;
 	
 	for(int i = 0;i<n;i++)
 	{
 		int idx = upper_bound(dp,dp+n+1,a[i])-dp;
 		if(a[i]>dp[idx-1] && a[i]<dp[idx]){
 			dp[idx] = a[i];
		 }
	 }
	 int ma = 0;
	 for(int i = n;i>=0;i++)
	 {
	 	if(dp[i]!=INT_MAX){
	 		ma = i;
	 		break;
		 }
	 }
	 return ma;
 }
 main()
 {
    int a[]={10,5,8,3,9,4,12,11};
    int n = 8;
    cout<<longsubseq(n,a);
 }
