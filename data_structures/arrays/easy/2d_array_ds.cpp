https://www.hackerrank.com/challenges/2d-array



/*

Max hourglass problem in 2D array

*/

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int maxsum = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int toprow=arr[i][j] +arr[i][j+1]+arr[i][j+2];
            int bottomrow=arr[i+2][j] +arr[i+2][j+1]+arr[i+2][j+2];
            int middleElement = arr[i+1][j+1];
            int sum = toprow + middleElement + bottomrow;
            maxsum = max(sum, maxsum);
        }
    }
    cout<<maxsum;
    return 0;
}
