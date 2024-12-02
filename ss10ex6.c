#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 5, 2, 1, 3, 2, 6, 8, 0};
    int size = sizeof(arr) / sizeof(int); 
    int number;
    int count = 0; 
    int index[100]; 
    printf("Nhap vao 1 so nguyen bat ki: ");
    scanf("%d", &number);
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            index[count] = i; 
            count++;
        }
    }
    if (count > 0) {
        printf("Co phan tu nay trong mang\n");
        for (int i = 0; i < count; i++) {
            printf("Xuat hien tai vi tri: %d\n", index[i]);
        }
    } else {
        printf("Khong co phan tu nay trong mang\n");
    }

    return 0;
}
