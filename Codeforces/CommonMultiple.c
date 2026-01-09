#include <stdio.h>
void counting(int arr[], int n){
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);
}

void sorting(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    counting(arr, n);

}

void solve(){
    int n;
    scanf("%d", &n);
    int arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sorting(arr, n);

 
}
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        solve();
       
    }

}
