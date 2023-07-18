void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int position = i;
        for (int o = i + 1; o < n; o++) {
            if (arr[o] < min) {
                min = arr[o];
                position = o;
            }
        }

        int temp = arr[i];
        arr[i] = arr[position];
        arr[position] = temp;
    }
}