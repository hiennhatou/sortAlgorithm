void selectionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int o = i - 1;
        int current = i;
        while (o >= 0 && arr[o] > arr[current]) {
            int temp = arr[o];
            arr[o] = arr[current];
            arr[current] = temp;
            current--;
            o--;
        }
    }
}
