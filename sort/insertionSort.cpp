void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = i;
        while (current > 0 && arr[current] < arr[current - 1]) {
            int temp = arr[current - 1];
            arr[current - 1] = arr[current];
            arr[current] = temp;
            current--;
        }
    }
}
