#include <stdio.h>

// 🐚 Function para sa Shell Sort Algorithm
void shellSort(int arr[], int n) {
    // Ang "gap" mura’g distance sa imong crush — magkadugay, magka-close 😆
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Kung mas dako ang left kaysa sa right, ilisi sila
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp; // Ibutang si temp sa sakto nga pwesto (di pareha sa uban 😜)
        }
    }
}

int main() {
    int n;

    // 🎉 Meme Intro
    printf("🚀 WELCOME TO SHELL SORT UNIVERSITY 😂\n");
    printf("-------------------------------------------\n");
    printf("Let's sort your life... este, your numbers! 💻\n");
    printf("Warning: Too much learning may cause intelligence 🤓\n\n");

    // Mangayo ug number of elements
    printf("👉 Enter number of elements (ayaw pataka ug type ha): ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input values gikan sa user
    printf("\n📥 Enter %d elements (parang nag-input ug love letters 😆):\n", n);
    for (int i = 0; i < n; i++) {
        printf("   🔢 Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Show original array
    printf("\n🧐 Original array (Unsorted pa, murag kinabuhi):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Sorting part
    printf("\n\n⚙️ Sorting... please wait (Shell Sort is flexing its muscles 💪)\n");
    shellSort(arr, n);

    // Show sorted array
    printf("\n🎉 BOOM! Sorted array gamit ang Shell Sort 😎🔥\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Outro meme section
    printf("\n\n------------------------------------------------------------\n");
    printf("💡 FUN FACT: Shell Sort kay na-invent ni Donald Shell, dili ni seashell 🐚\n");
    printf("💬 LIFE LESSON: Sorting is like love — slowly, gap by gap, you find order ❤️\n");
    printf("📚 ALGORITHM QUOTE: \"If it’s not sorted, it’s not satisfying.\" 😌\n");
    printf("------------------------------------------------------------\n");
    printf("End of program. Good luck sa inyong recitation! 💯👏\n");
    printf("Brought to you by: Jan Palahubog. Mary Rose Angel. Jhondarly4
    . ☕\n");

    return 0;
}
