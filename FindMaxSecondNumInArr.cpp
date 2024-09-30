#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int ok = 0;

    for (int z = n - 1; z >=0; --z)
    {
        if(arr[z] < arr[n - 1]){
            printf("%d", arr[z]);
            ok = 1;
            break;
        }
    }

    if(ok == 0) {
        std::cout << "NOT FOUND";
    }
}
