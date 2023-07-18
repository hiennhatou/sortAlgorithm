void interchangeSort(int arr[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        int min = arr[i];
        for (int o = i + 1; o < n; o++) {
            if(arr[o] < min) {
                int temp = arr[i];
                arr[i] = arr[o];
                arr[o] = temp;
                min = arr[i];
            }
        }
    }
}
