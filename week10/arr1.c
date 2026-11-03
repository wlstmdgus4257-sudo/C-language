#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int Left = 0;
    int Right = size - 1;

    while (Left <= Right) {

        // 중간 위치를 계산한다.
        int mid = (Left + Right) / 2;

        // 만약 중간 위치의 값이 찾을 값과 같다면
        if (arr[mid] == target) {
            // 중간 위치를 반환하고 탐색을 종료한다.
            return mid;
        }

        // 그렇지 않고 중간 위치의 값이 찾을 값보다 작다면
        else if (arr[mid] < target) {
            // 시작 위치를 중간 위치 + 1로 변경한다.
            Left = mid + 1;
        }

        // 그렇지 않다면
        else {
            // 끝 위치를 중간 위치 - 1로 변경한다.
            Right = mid - 1;
        }
    }

    // 반복이 종료될 때까지 값을 찾지 못했다면 -1을 반환한다.
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    printf("%d\n", result);

    return 0;
}